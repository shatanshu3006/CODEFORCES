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

bool func(vector<ll>&v,ll mid,ll d){
    ll n = v.size();
    ll used = 0;
    for(ll i=0; i<mid; i++){
        ll req = (d + 1 + v[i] - 1) / v[i];
        used += req;
        if(used > n) return false;
    }
    return true;
    
}
int main(){
    ll n,d;
    cin>>n>>d;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    // ll rem=n;
    // ll count=0;
    // for(ll i=0;i<n;i++){
    //     ll element=v[i];
    //     ll rqd=1+d/v[i];
    //     if(rqd<=rem){
    //         rem-=rqd;
    //         count++;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout<<count<<endl;
    ll low=0,high=n;
    ll ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(func(v,mid,d)==true){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}