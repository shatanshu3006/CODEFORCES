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
#include<climits>
#include<iomanip>
typedef long long ll;
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<(k-1)%n+1<<endl;
        }
        else{
            cout<<((k-1)+((k-1)/(n/2)))%n + 1<<endl;
        }
    }
}