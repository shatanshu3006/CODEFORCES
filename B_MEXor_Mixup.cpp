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
ll a,b;
vector<ll> vec(300007,0);

void precomp(){
for(ll i=1;i<=300007;i++){
    vec[i]=(vec[i-1]^i);
}
}

int main(){
    ll t;cin>>t;
    precomp();
    while(t--){
        
        cin>>a>>b;
        // precomp();       need not to calculate for every test case 

        ll val=vec[a-1];
        ll ans=a;
        if(val!=b){
            if((val^b)==a){
                ans+=2;
            }
            else{
                ans+=1;
            }
        }
        cout<<ans<<endl;
        
    }
}