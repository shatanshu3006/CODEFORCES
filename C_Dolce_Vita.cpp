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
        ll n,x;
        cin>>n>>x;
        vector<int>a(n);
        // sort(a.begin(),a.end());
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        ll sum=0,ans=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            
            if(sum<=x){
                ans+=(x-sum)/(i+1)+1;
                
            }
        }
        cout<<ans<<endl;
    }
}