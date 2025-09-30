// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<queue>
// #include<set>
// #include<map>
// #include<string>
// #include<iterator>
// #include<bitset>
// #include<functional>
// #include <random>
// #include<numeric>
// #include<limits>
// #include<stack>
// #include<tuple>
// #include<deque>
// #include<iomanip>
// typedef long long ll;
// using namespace std;
// using ull = unsigned long long;
// using ld = long double;
// ll mod=1e9+7;

// int main(){
//     int t;cin>>t;
//     while(t--){
//         int n;cin>>n;
//         string s;cin>>s;
//         set<int>st;
//         for( int i=0;i<n;i++){
//             if(s[i]=='0'){
//                 st.insert(i+1);
//             }
//         }
       

//             int cost=0;
//             for(int i=1;i<n;i++){
//              if(st.find(i)==st.end()) continue;
//              int temp=i;
//              int cnt=1;
//              while(true){
//                 if(st.find(temp*cnt)==st.end()) break;
//                 cost+=i;
//                 st.erase(temp*cnt);
//                 cnt++;
//              }
//             }
//             cout<<cost<<endl;

//     }
// }

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
using ull = unsigned long long;
using ld = long double;
ll mod=1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;


        ll cost=0;
        vector<bool> vis(n+1,0);
        for(ll i=1;i<=n;i++){
            if(s[i-1]=='1'){
                vis[i-1]=1;
            }
        }
        for(ll i=1;i<=n;i++){
            if(s[i-1]=='0'){
                for(ll j=i;j<=n;j+=i){
                    if(s[j-1]=='1'){
                        break;
                    }
                    if(s[j-1]=='0'&&vis[j-1]==0){
                        vis[j-1]=1;
                        cost+=i;
                    }
                }
            }
        }

        cout<<cost<<endl;
    }
}