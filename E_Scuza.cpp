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
ll mod=1000000001;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),b(q);
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<q;i++)cin>>b[i];

        vector<ll>pref(n,0);
        vector<ll> maxsumsofar(n,0);
        pref[0]=a[0];
        maxsumsofar[0]=a[0];
        for(ll i=1;i<n;i++){
            pref[i]=(pref[i-1]+a[i]);
            maxsumsofar[i]=max(maxsumsofar[i-1],a[i]);
        }
        
        vector<ll>ans(q,0);
        for(ll i=0;i<b.size();i++){
        ll low=0;ll high=n-1;
        ll pos=-1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(maxsumsofar[mid]<=b[i]){
                pos=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        // for(auto it:pref){
        //     cout<<it<<" ";
        // }
        
        if(pos==-1){
            cout<<0<<" ";
        }
        else{
            cout<<pref[pos]<<" ";
        
    }
}
        // for(auto it:ans){
        //     cout<<it<<" ";
        // }
        cout<<endl;
    }
}