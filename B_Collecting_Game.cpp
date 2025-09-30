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
#include <random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<iomanip>
typedef long long ll;
using namespace std;
using ull = unsigned long long;
using ld = long double;
ll mod=1e9+7;

using namespace std;

#define pb push_back
#define ff first
#define ss second

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;



void setIO() {
    ios_base::sync_with_stdio(0); cin.tie(0);
}

int main(){
    setIO();
    int T;
    cin >> T;
    for(int tt = 1; tt <= T; tt++){
        int n;
        cin >> n;
        pii arr[n + 1];
        for(int i = 1; i <= n; i++) cin >> arr[i].ff, arr[i].ss = i;
        sort(arr + 1, arr + n + 1);
        int nxt[n + 1];
        ll sum[n + 1];
        int ans[n + 1];
        nxt[0] = sum[0] = 0;
        for(int i = 1; i <= n; i++){
            if(nxt[i - 1] >= i){
                nxt[i] = nxt[i - 1];
                sum[i] = sum[i - 1];
            } else {
                sum[i] = sum[i - 1] + arr[i].ff;
                nxt[i] = i;
                while(nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].ff){
                    nxt[i]++;
                    sum[i] += arr[nxt[i]].ff;
                }
            }
            ans[arr[i].ss] = nxt[i];
        }
        for(int i = 1; i <= n; i++) cout << ans[i] - 1 << " ";
        cout << endl;
    }
}