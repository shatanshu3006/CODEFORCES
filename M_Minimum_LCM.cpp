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
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll x=1;
        for( int i=2;i*i<=n;i++){
            if(n%i==0){
                x=n/i;
                break;
            }
        }
        cout<<x<<" "<<n-x<<endl;
    }
}