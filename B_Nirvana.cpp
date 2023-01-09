#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll n){
    if(n<10){
        return n;
    }
    else{
        ll x1=f(n/10);
        ll x2=f(n/10 - 1);
        return max(n%10*x1,9*x2);
    }
}
int main(){
    ll n;cin>>n;
    cout<<f(n)<<endl;
}