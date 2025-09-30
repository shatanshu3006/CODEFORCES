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

int solve(ll a,ll b){
    int res=0;
    while(a){
        a=a/b;
        res++;
    }

    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        bool one=false;
        if(b==1){
            b++;
            one=true;
        }
        int ans=solve(a,b);
        for(int i=1;i<=ans;i++){
            ans=min(ans,solve(a,b+i)+i);
        }
        if(one==true){
            ans+=1;
        }

        cout<<ans<<endl;


    }
}