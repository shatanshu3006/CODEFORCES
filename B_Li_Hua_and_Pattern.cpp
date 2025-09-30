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
        ll n,k;
        cin>>n>>k;
        vector<vector<char> > v(n,vector<char> (n));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>v[i][j];
            }
        }

        ll cnt=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(v[i][j]!=v[n-1-i][n-1-j]){
                    cnt++;
                }
            }
        }
        cnt/=2;
        if(cnt>k){
            cout<<"NO"<<endl;
        }
        else{
            k-=cnt;
            if(n & 1){
                cout<<"YES"<<endl;
            }
            else{
                if(k & 1){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    return 0;
}