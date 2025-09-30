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
// #define ll long long;
using namespace std;


ll mod=1e9+7;
int main(){
    ll t;cin>>t;
    while(t--){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;

    vector<ll>x(n+1),y(n+1);
    for(ll i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }

    ll distab=abs(x[a]-x[b])+abs(y[a]-y[b]);
    ll minia=1e18,minib=1e18;

    for(ll i=1;i<=k;i++){
        // ll val1=abs(x[a]-x[i]) + abs(y[a]-y[i]);
        minia=fmin(minia,abs(x[a]-x[i]) + abs(y[a]-y[i]));

        // ll val2=abs(x[b]-x[i]) + abs(y[b]-y[i]);
        minib=fmin(minib,abs(x[b]-x[i]) + abs(y[b]-y[i]));
    }

    cout<<fixed<<setprecision(0)<<(fmin(distab,minia+minib))<<endl;
    }
}