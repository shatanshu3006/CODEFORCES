#include <iostream>
#include <vector>
#include <string>
typedef long long ll;
using namespace std;

const ll MOD = 998244353;

bool isPalindrome(const string& s, ll start, ll len) {
    for (ll i = 0; i < len / 2; ++i) {
        if (s[start + i] != s[start + len - 1 - i]) {
            return false;
        }
    }
    return true;
}

bool isGoodEnding(const string& s, ll K) {
    if (s.size() < K) return true;
    return !isPalindrome(s, s.size() - K, K);
}

int main() {
    ll N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    vector<vector<ll> > dp(N + 1, vector<ll>(1 << K, 0));
    dp[0][0] = 1; // Base case: empty string has one way to be valid

    for (ll i = 0; i < N; ++i) {
        for (ll mask = 0; mask < (1 << K); ++mask) {
            if (dp[i][mask] == 0) continue;
            for (char c : {'A', 'B'}) {
                if (S[i] != '?' && S[i] != c) continue;
                ll newMask = ((mask << 1) & ((1 << K) - 1)) | (c == 'B');
                string current = "";
                for (ll j = 0; j < K; ++j) {
                    if ((newMask & (1 << (K - 1 - j))) != 0) {
                        current += 'B';
                    } else {
                        current += 'A';
                    }
                }
                if (isGoodEnding(current, K)) {
                    dp[i + 1][newMask] = (dp[i + 1][newMask] + dp[i][mask]) % MOD;
                }
            }
        }
    }

    ll result = 0;
    for (ll mask = 0; mask < (1 << K); ++mask) {
        result = (result + dp[N][mask]) % MOD;
    }

    cout << result << endl;
    return 0;
}
