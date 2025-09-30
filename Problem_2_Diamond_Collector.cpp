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
#include <climits>
#include<iomanip>
typedef long long ll;
using namespace std;

int main(){
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());

    int can_take_left[n];

    int l=0,r=0;

    while(l<n){
        while(r<n && v[r]-v[l]<=k){
            r++;
        }
        can_take_left[l]=r-l;
        l++;
    }

    int max_val_after_i[n+1];
    max_val_after_i[n]=0;
    for(int i=n-1;i>=0;i--){
        max_val_after_i[i]=max(max_val_after_i[i+1],can_take_left[i]);
    }

    int ans=0;
    for( int l=0;l<n;l++){
        ans=max(ans,can_take_left[l] + max_val_after_i[l+can_take_left[l]]);
    }

    cout<<ans<<endl;
}