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

ll M = 1e9 + 7;

// // Euler's Totient Function
// ll phi(ll n) {
//     ll result = n;
//     for (ll p = 2; p * p <= n; p++) {
//         if (n % p == 0) {
//             while (n % p == 0) n /= p;
//             result -= result / p;
//         }
//     }
//     if (n > 1) result -= result / n;
//     return result;
// }

// // Modular exponentiation
// ll modexp(ll a, ll b, ll mod) {
//     ll res = 1;
//     a %= mod;
//     while (b > 0) {
//         if (b & 1) res = (res * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return res;
// }

// int main() {
//     ll t; cin >> t;
//     ll ph = phi(M); // since M is fixed, we compute phi(M) once
//     while (t--) {
//         ll n, k; cin >> n >> k;

//         ll base = n % M;
//         ll exp = k % ph;

//         cout << modexp(base, exp, M) << "\n";
//     }
// }

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;

        ll ans=1;
        for(int i=0;i<k;i++){
            ans*=n;
            ans%=M;
        }
        cout<<ans%M<<endl;
    }
}