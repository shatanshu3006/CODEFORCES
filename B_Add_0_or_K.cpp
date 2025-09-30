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
        ll n,k;cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];

        for(ll g=2;;g++){
            if(gcd(g,k)!=1){
                continue;
            }
            for(auto &it:a){
                while(it%g!=0){
                    it+=k;
                }
            }
            for(auto it:a)cout<<it<<" ";
            cout<<endl;
            break;
        }
    }
}