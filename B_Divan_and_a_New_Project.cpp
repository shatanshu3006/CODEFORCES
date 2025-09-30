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
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++){
            int element;
            cin>>element;
            a[i]={element,i};
        }
        sort(a.rbegin(),a.rend());

        int x=1;
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=2*x*a[i].first;
            x+=i&1;
        }
        


        cout<<sum<<endl;
        cout<<0<<" ";
        x=1;
        vector<ll> ans(n);
        for(int i=0;i<n;i++){
            if(i&1){
                ans[a[i].second]=x;
            }
            else{
                ans[a[i].second]=-x;
            }
            x+=i&1;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}