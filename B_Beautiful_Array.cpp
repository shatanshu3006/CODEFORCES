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

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;


        if(s<b*k||s>(b*k+(k-1)*n)){
            cout<<"-1"<<endl;
            continue;
        }


        vector<ll> a(n,0);
        a[0]=b*k;
        s-=b*k;

        for(int i=0;i<n;i++){
                int add=min(s,k-1);
                a[i]+=add;
                s-=add;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}