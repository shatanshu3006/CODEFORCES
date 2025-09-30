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

ll mod=1e9+7;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>a(n),b(n);
        map<int,int>mpa,mpb;
        set<ll>st;
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            a[i]=x;
            st.insert(x);
        }
        for(ll i=0;i<n;i++){
            ll x;cin>>x;
            b[i]=x;
            st.insert(x);
        }

        int cnt=1;
        for(ll i=1;i<n;i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else{
                mpa[a[i-1]]=max(mpa[a[i-1]],cnt);
                cnt=1;
            }
        }

        mpa[a[n-1]]=max(mpa[a[n-1]],cnt);
        

        cnt=1;
        for(ll i=1;i<n;i++){
            if(b[i]==b[i-1]){
                cnt++;
            }
            else{
                mpb[b[i-1]]=max(mpb[b[i-1]],cnt);
                cnt=1;
            }
        }

        mpb[b[n-1]]=max(mpb[b[n-1]],cnt);

        int ans=0;
        for(auto it:st){
            ans=max(ans,mpa[it]+mpb[it]);
        }
        cout<<ans<<endl;
    }
}