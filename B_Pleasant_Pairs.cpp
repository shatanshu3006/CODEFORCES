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

        vector<pair<ll,ll>>v(n);
        for( int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }

        sort(v.begin(),v.end());

        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i].first*v[j].first>=2*n){
                    break;
                }
                if(v[i].first*v[j].first==v[i].second+v[j].second){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

        
    }
}