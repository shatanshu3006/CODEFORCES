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

// GCD using Euclidean algorithm
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// LCM using GCD
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll mod=1e9+7;
int main(){
    int t;cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n>>x>>y;

    ll a=n/x;
    ll b=n/y;
    ll c=n/(lcm(x,y));

    ll small=(b-c)*(b-c+1)/2;
    ll large=((n)*(n+1)/2)-((n-a+c)*(n-a+c+1)/2);

    cout<<large-small<<endl;
    
    }
    
}