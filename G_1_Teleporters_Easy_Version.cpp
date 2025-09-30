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
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll c;cin>>c;
        vector<ll>a(n);
        vector<ll> cost(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            cost[i]=a[i]+i+1;
        }
        sort(cost.begin(),cost.end());

        // vector<pair<ll,ll>> v(n+1);
        // for(ll i=1;i<=n;i++){
        //     v[i].first=cost[i];
        //     v[i].second=i;
        // }

        ll cnt=0;
        ll prev=0;
        for(ll i=0;i<n;i++){
            if(prev+cost[i]<=c){
                prev+=cost[i];
                cnt++;
            }
            else{
                break;
            }
        }

        cout<<cnt<<endl;


        // vector<int>vals;
        // for(int i=1;i<=n;i++){
        //     vals.push_back(i+a[i-1]);
        // }
        // sort(vals.begin(),vals.end());

        // // for(auto it:vals){
        // //     cout<<it<<" ";
        // // }
        // // cout<<endl;
        // vector<int>pref(vals.size(),0);
        // pref[0]=vals[0];
        // for(int i=1;i<vals.size();i++){
        //     pref[i]=pref[i-1]+vals[i];
        // }
        // for(auto it:pref){
        //     cout<<it<<" ";
        // }
        // cout<<endl;

        // // int ans=-1;
        // // for(int i=0;i<pref.size();i++){
        // //     if(pref[i]>c){
        // //         ans=i;
        // //     }
        // // }
        // // cout<<ans<<endl;

        // vector<ll>a(n);
        // for( ll i=0;i<n;i++){
        //     cin>>a[i];
        // }
        // vector<ll>v(n);
        // for(ll i=1;i<=n;i++){
        //     v[i-1]=a[i-1]+i;
        // }
        // sort(v.begin(),v.end());
        // // for(auto it:v)cout<<it<<" ";
        // // cout<<endl;

        // ll ind=0;
        // while(c>0){
        //     if(ind>=v.size()){
        //         break;
        //     }
        //     c-=v[ind];
        //     if(c>=0){
        //         ind++;
        //     }
        // }
        // if(ind>=v.size()){
        //     cout<<n<<endl;
        // }
        // else{
        //     cout<<ind<<endl;
        // }
    }
}