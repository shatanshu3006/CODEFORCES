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
    ll n;cin>>n;
    string s;cin>>s;

    bool flag=false;
    ll l=0,r=0;
    char c=s[0];
    for(ll i=1;i<n;i++){
        if(s[l]<=s[i]){
            l=i;
        }
        else{
            r=i;
        }
        if(r>l){
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}