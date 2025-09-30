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

ll gcd(ll a, ll b) {
    while(b != 0) {
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
        vector<ll>a(n);
        for( ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll evengcd,oddgcd;
        evengcd=a[0];
        oddgcd=a[1];                 
        for(int i=0;i<n;i+=2){
            evengcd=gcd(evengcd,a[i]);
        }
        for(int i=1;i<n;i+=2){
            oddgcd=gcd(oddgcd,a[i]);
        }

        bool flag=false;
        for(int i=1;i<n;i+=2){
            if(a[i]%evengcd==0){
                flag=true;
                break;
            }
        }
        if(flag){
        for(int i=0;i<n;i+=2){
            if(a[i]%oddgcd==0){
                flag=0;
                break;
            }
        }
    

        if(flag==1){
            cout<<oddgcd<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        cout<<evengcd<<endl;
    }


    }
}