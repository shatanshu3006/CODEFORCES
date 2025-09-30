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
#include<iomanip>
typedef long long ll;
using namespace std;

long long ncr(ll n, ll r){
    long long res=1;

    for(int i=0;i<r;i++){
        res*=(n-i);
        res=res/(i+1);
    }
    return res;
}

// int main(){
//     ll t;cin>>t;
//     while(t--){
//         ll n;cin>>n;
//         vector<ll>a(n);
//        for(ll i=0;i<n;i++){
//         cin>>a[i];
//        }

//        map<ll,ll>mp1;
//        vector<ll>dp(n,0);
//        ll ans=0;
//        for(ll i=0;i<n;i++){

//         if(i>0){
//             dp[i]=dp[i-1];
//         }

//         if(mp1.find(a[i])!=mp1.end()){
//             dp[i]+=mp1[a[i]];
//         }
//         mp1[a[i]]+=(i+1);
        
        
//         ans+=dp[i];
//        }
//        cout<<ans<<endl;

//     }
// }

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<int>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        map<ll,ll>sumIndices;
        ll ans=0;

        for(ll j=0;j<n;j++){
            if(sumIndices.find(a[j])!=sumIndices.end()){
                ans+=sumIndices[a[j]]*(n-j);
            }
            sumIndices[a[j]]+=(j+1);
        }
        cout<<ans<<endl;
    }
}