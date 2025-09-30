
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
    ll n;
    cin>>n;
    vector<pair<ll,ll> > v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i].second;
        cin>>v[i].first;
    }


    sort(v.begin(),v.end());
    ll l=0;
    ll r=n-1;
    ll ans=0;
    while(l<r){
        ll time=v[l].first+v[r].first;
        ans=max(ans,time);

        ll min_cow_group=min(v[l].second,v[r].second);
        // if(l==r){
        //     min_cow_group/=2;
        // }
        v[l].second -= min_cow_group;
        v[r].second -= min_cow_group;

        if (v[l].second == 0) l++;
        if (v[r].second == 0) r--;

    }

    cout<<ans<<endl;

    
}