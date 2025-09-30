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
    int t;cin>>t;
    while(t--){
        // int n;cin>>n;
        // vector<int>a(n,0);
        // vector<int>tupac(n,0);
        // for(int i=0;i<n;i++){
        //     int x;cin>>x;
        //     a[i]=x;
        //     tupac[i]=(2*(i+1));
        // }
        // vector<int>pref(n,0);
        // pref[0]=tupac[0];
        // for(int i=1;i<tupac.size();i++){
        //     pref[i]=pref[i-1]+tupac[i];
        // }
        // int ans=-1;
        // for(int i=0;i<n;i++){
        //     if(pref[i]>a[n-1]){
        //         ans=i;
        //         break;
        //     }
        // }
        // cout<<ans<<endl;
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>b=a;
        reverse(b.begin()+1,b.end());
        int ans=0,x=1;

        while(x<n){
            if(b[x+1]==b[1]){
                x++;
                continue;
            }
            ans++;
            x*=2;
        }

        cout<<ans<<endl;
    }
}