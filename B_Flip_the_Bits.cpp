#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<iterator>
#include<bitset>
#include<functional>
#include<random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include <climits>
#include<iomanip>
typedef long long ll;
using namespace std;
using namespace std;

// Function to check if we can transform string a into string b
// under the rules of problem 1504B - "Flip the Bits".
void solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    // Append a dummy '0' at the end of both strings.
    // This is a trick to avoid edge-case checks at the end.
    // a.push_back('0');
    // b.push_back('0');

    int balance = 0;  // difference between number of 1s and 0s seen so far

    // Traverse through the string character by character
    for (int i = 0; i < n; i++) {
        // Update the balance of 1s and 0s seen so far
        if (a[i] == '1') {
            balance++;
        } else {
            balance--;
        }

        // Key idea:
        // When transitioning between "a[i]==b[i]" and "a[i+1]==b[i+1]",
        // we must ensure the prefix [0..i] can be flipped.
        // That is only possible if the balance == 0 (equal number of 0s and 1s).
        bool currentEqual = (a[i] == b[i]);
        bool nextEqual    = (a[i + 1] == b[i + 1]);

        if (currentEqual != nextEqual && balance != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}