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

//range sum query category 

int main(){
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    map<ll,bool> mp;
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        mp[i]=1;
    }
    ll prev=-1;
    for(ll i=0;i<q;i++){
        ll id;
        cin>>id;
        
        if(id==1){
            ll idx,val;
            cin>>idx>>val;
            idx--;
            if(mp[idx]==0){
                // cout<<prev<<endl;
                s-=prev;
                s+=val;
                v[idx]=val;
                mp[idx]=1;
            }
            else{

                s-=v[idx];
                s+=val;
                v[idx]=val;
                
            }
        }
        else{
            ll val;
            cin>>val;
            s=val*n;
            prev=val;
            mp.clear();
        }
        cout<<s<<endl;

    }
    return 0;
    

}