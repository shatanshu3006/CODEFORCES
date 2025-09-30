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

    ll t;cin>>t;
    while(t--){
        ll w,h;cin>>w>>h;
        ll maxarea=0;
        vector<int>area;
        for(int idx=0;idx<4;idx++){
            ll k;cin>>k;
            vector<int>a(k);
            int first,last;
            
            for(int i=0;i<k;i++){
                cin>>a[i];
                if(i==0)first=a[i];
                if(i==k-1)last=a[i];
            }
            int base=last-first;
            if(idx<=1){
                maxarea=max(maxarea,base*h);
            }
            else{
                maxarea=max(maxarea,base*w);
            }

        }
        cout<<maxarea<<endl;
    }
    return 0;
}