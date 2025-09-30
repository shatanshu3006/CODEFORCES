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
        int n;cin>>n;
        int p=log2(n-1);
        for( int i=n-1;i>=(1<<p);i--){
            cout<<i<<" ";
        }
        for(int i=0;i<=(1<<p)-1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}