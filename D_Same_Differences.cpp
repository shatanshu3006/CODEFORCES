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


int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>a(n);
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]-i]++;
        }
        ll ans=0;
        for(auto it:mp){
            if(it.second>=2){
                ans+=(it.second * (it.second-1))/2;
            }
        }
        cout<<ans<<endl;

    }
}