#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct stackz{
    vector<ll> s,smin={LLONG_MAX},smax={LLONG_MIN};
    void push(ll x){
        s.push_back(x);
        smin.push_back(::min(smin.back(),x));
        smax.push_back(::max(smax.back(),x));
    }
    ll pop(){
        ll res=s.back();
        s.pop_back();
        smin.pop_back();
        smax.pop_back();

        return res;
    }
    bool empty(){
        return s.empty();
    }
    ll min(){
        return smin.back();
    }
    ll max(){
        return smax.back();
    }
};

stackz s1,s2;
//we use two stackz, one to insert and the other to remove the elements 
//we are basically implementing a queue using two stacks
//if s1 gets empty then all the values of s2 are transmitted to s1

void add(ll x){
    s2.push(x);
}

void remove(){
    if(s1.empty()){
        //transferring all values from s2 to s1 if s1 is empty
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
    
}

ll k;
bool good(){
    ll mn=min(s1.min(),s2.min());
    ll mx=max(s1.max(),s2.max());

    return mx-mn<=k;
}

int main(){
    ll n;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];

    ll l=0;
    ll res=0;
    
    for(ll r=0;r<n;r++){
        add(a[r]);

        while(!good()){
            remove();
            l++;
        }
        res+=r-l+1;
    }
    cout<<res<<endl;
    return 0;
}
