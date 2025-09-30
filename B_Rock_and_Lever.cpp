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
#include<climits>
#include<iomanip>
typedef long long ll;
using namespace std;

ll calculate_max_pos_of_1_bit(ll n){
    ll maxi=-1;
    for(ll i=0;i<32;i++){
        if((n&(1<<i))){
            if(maxi<=i){
                maxi=i;
            }
        }
    }
    return maxi;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>a(n);
        vector<ll>v;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            v.push_back(calculate_max_pos_of_1_bit(a[i]));
        }
        map<ll,ll>mp;
        for(ll i=0;i<v.size();i++){
            mp[v[i]]++;
        }

        ll ans=0;
        for(auto it:mp){
            if(it.second!=-1){
            if(it.second%2==0){
                ans+=(it.second/2)*(it.second-1);
            }
            else{
                ans+=((it.second-1)/2)*(it.second);
            }
        }
        }

        // for(auto it:v){
        //     cout<<it<<" ";
        // }
        // cout<<endl;

        cout<<ans<<endl;
    }
}