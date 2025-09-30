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

int main(){
    // int t;cin>>t;
    // while(t--){
    //     ll x,y,k;cin>>x>>y>>k;
    //     ll temp=x-1;
    //     ll total=y*k+k-1;
    //     ll rqd=(total+temp-1)/temp;
    //     rqd+=k;

    //     cout<<rqd<<endl;
    // }


    int t; cin >> t;
    while (t--) {
        ll x, y, k; 
        cin >> x >> y >> k;

        // total sticks required: k for saving + k*y for coal
        ll total = k * y + k - 1;

        // number of first trades needed
        ll first_trades = (total + (x - 2)) / (x - 1);

        // add k (mandatory second trades)
        cout << first_trades + k << endl;
    }
}