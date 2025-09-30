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

bool fair(ll nbr){
    ll dup=nbr;

    while(dup){
        int digit=dup%10;
        if(digit!=0&&nbr%digit!=0){
            return false;
        }
        dup/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    while(!fair(n)){
        n++;
    }
    cout<<n<<endl;
}
}