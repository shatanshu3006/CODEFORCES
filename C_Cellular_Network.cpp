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
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans=-1e9;

    for(ll i=0;i<n;i++){
        ll x=a[i];

        auto ind=lower_bound(b.begin(),b.end(),x);
        auto ind2=ind-1;

        if(ind2<b.begin()){
            ind2=b.begin();
        }
        ll mini=min(abs(x- *(ind)),abs(x- *(ind2)));

        ans=max(mini,ans);

        
    }
    cout<<ans<<endl;
}