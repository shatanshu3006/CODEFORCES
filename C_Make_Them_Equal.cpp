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
    ll t;cin>>t;
    while(t--){
    ll n;char ch;
    string s;
    cin>>n>>ch;
    cin>>s;
    ll cnt=0;
    bool check=true;
    int ind;
    for(ll i=0;i<n;i++){
        if(s[i]==ch)cnt++;
        if(i>=n/2 && s[i]==ch){
            check =false; 
            ind=i;
        }
    }
    if(n==cnt){
        cout<<0<<endl;
    }
    else{
        if(!check){
            cout<<1<<endl;
            cout<<ind+1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }


    }
}
}