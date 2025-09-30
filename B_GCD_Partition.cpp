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

ll gcd(ll a, ll b){
    while(b){
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v(n),pref(n,0);
        for(ll i=0;i<n;i++){  
            cin>>v[i];
            if(i>=1){
                pref[i]=pref[i-1]+v[i];
            }
            else{
                pref[i]=v[i];
            }
        }
        ll maxi=0;
        for(ll i=n-1;i>0;i--){
            maxi=max(maxi,gcd(pref[i-1],pref[n-1]-pref[i-1]));
        }

        cout<<maxi<<endl;
    }
}