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
using ull = unsigned long long;
using ld = long double;
ll mod=1e9+7;

ll binpowiter(ll a,ll b){
    if(a==0 && b==0)return 1;
    if(b==0 && a!=0)return 1;
    if(a==0 && b!=0)return 0;
    a=a%mod;
    b=b%mod;
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return res%mod;
}

ll binpowrec(ll a,ll b){
    a=a%mod;
    b=b%mod;
    if(a==0 && b==0)return 1;
    if(b==0) return 1;
    
    ll res=binpowrec(a,b/2);
    if(b%2){
        return (res*res*a)%mod;
    }
    else{
        return (res*res)%mod;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        
        cin>>a>>b;
        a=a%mod;
        b=b%mod;
        cout<<binpowiter(a,b)%mod<<endl;
    }
    return 0;
}