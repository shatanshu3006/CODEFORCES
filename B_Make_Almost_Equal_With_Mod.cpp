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

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll>arr;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            arr.push_back(x);
        }
        int even_count=0,odd_count=0;
        for( int i=0;i<n;i++){
            if(arr[i]%2==0)even_count++;
            else odd_count++;
        }
        if(odd_count>=1 && even_count>=1){
            cout<<2<<endl;

        }
        else{
            ll ans=-1;
            ll x=2;
            while(x<=1e17){
                set<ll>st;
                for(int i=0;i<n;i++){
                    st.insert(arr[i]%x);
                }
                if(st.size()==2){
                    cout<<x<<endl;
                    break;
                }
                else{
                    x*=2;
                }
            }
        }
        
    }
}