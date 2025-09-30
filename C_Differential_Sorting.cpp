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
ll mod=1e18;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>a(n);
        bool sorted = true;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            a[i]%=mod;
            if(i > 0 && a[i-1] > a[i]) sorted = false;
        }
        ll ops;
        if(a[n-2]<=a[n-1]){
            if(a[n-1]<0){
                if(sorted){
                ops=0;
                cout<<ops<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
            else{
                ops=n-2;
                cout<<ops<<endl;
                for(ll i=0;i<n-2;i++){
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
            }
        }
        else{
            cout<<-1<<endl;
        }

    }
}