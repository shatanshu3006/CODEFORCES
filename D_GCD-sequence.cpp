#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!

bool check(vector<ll>&store){ 
    //functino to check for an increasing gcd array
    ll n=store.size();
    vector<ll> gcd(n-1); 
    for(ll i=0;i<n-1;i++){ 
        gcd[i]=__gcd(store[i],store[i+1]); 
    } 
    for(ll i=1;i<n-1;i++){ 
        if(gcd[i]<gcd[i-1]){ 
            return false; 
        } 
    } 
    return true; 
} 

void solve()
{
   ll n;cin>>n;
   vector<ll>a(n),g(n,0);
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   for(ll i=0;i<n-1;i++){
       g[i]=__gcd(a[i],a[i+1]);
   }
   ll ind=-1;
   //finding the decrement point
   for(ll i=1;i<n-1;i++){
       if(g[i]<g[i-1]){
           ind=i;
           break;
       }
   }
   bool flag=false;
   if(ind==-1){   //no decrement
    cout<<"YES"<<endl;
    return ;
   }

   for(ll j=ind-1;j<=ind+1;j++){
       vector<ll>store;
       //storing all the 
       for(ll i=0;i<n;i++){
           if(i!=j){
               store.push_back(a[i]);
           }
           
       }
       if(check(store)==true){
               cout<<"YES"<<endl;
               flag=true;
               break;
           }
   }

   if(flag==false){
       cout<<"NO"<<endl;
   }
}
                    
signed main()
{
int t=1;
cin>>t;
while(t--)
{
   solve();
}
}