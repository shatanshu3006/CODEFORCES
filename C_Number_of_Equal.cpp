#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
#define fori(i,a,n) for(ll i=a;i<n;i++)
#define forj(j,b,n) for(ll j=b;j<n;j++)
                    
void solve()
{
   ll n,m;
   cin>>n>>m;
   map<ll,ll>mp1,mp2;
   fori(i,0,n){
       ll x;
       cin>>x;
       mp1[x]++;
   }
   forj(j,0,m){
       ll x;
       cin>>x;
       mp2[x]++;
   }
    ll ans=0;
   for(auto it:mp1){
       if(mp2.find(it.first)!=mp2.end()){
           ans+=it.second*mp2[it.first];
       }
   }
   
   cout<<ans<<endl;

}
                    
signed main()
{
solve();
}