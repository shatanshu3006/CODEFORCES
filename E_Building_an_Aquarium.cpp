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

bool func(ll &mid,vector<ll>&arr,ll &x){
    //returns if it contains less than or equal to water
    ll len=arr.size();
    ll volume=0;
    for(ll i=0;i<len;i++){
        if(arr[i]<=mid){
            volume+=mid-arr[i];
        }
    }
    return volume<=x;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        vector<ll>arr(n);
        for( int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll low=1; ll high=2e9;
        ll ans=0;
        while(low<=high){
            
            ll mid=low+(high-low)/2;
            if(func(mid,arr,x)==true){
                
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}