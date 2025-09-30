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

// ll maxRectangleArea(ll i, ll j, vector<vector<ll> > &grid, ll &ans, vector<vector<ll> > &memo) {
//     ll n = grid.size();
//     if (i >= n || j >= n) return 0; // out of bounds

//     if (memo[i][j] != -1) return memo[i][j];

//     if (grid[i][j] == 0) {
//         memo[i][j] = 0;
//         return 0;
//     }

//     ll max_area = 0;
//     ll min_width = numeric_limits<ll>::max();

//     for (ll row = i; row < n; row++) {
//         if (grid[row][j] == 0) break;
//         ll width = 0;
//         for (ll col = j; col < n; col++) {
//             if (grid[row][col] == 1) width++;
//             else break;
//         }
//         min_width = min(min_width, width);
//         ll area = min_width * (row - i + 1);
//         max_area = max(max_area, area);
//     }

//     memo[i][j] = max_area;
//     ans = max(ans, max_area);
//     return memo[i][j];
// }

// int main(){
//     ll t;cin>>t;
//     while(t--){
//         string s;
//         cin>>s;

//         set<char>st;
//         for(ll i=0;i<s.length();i++){
//             st.insert(s[i]);
//         }
//         if(st.size()==1 && st.count(1)){
//             cout<<st.size()*st.size()<<endl;
//             return 0;
//         }
//         ll n=s.length();
//         vector<string>mat;
//         mat.push_back(s);
//         ll idx=n-1;

//         while(idx>0){
//         string front="";
//         for(ll i=idx;i<n;i++){
//             front+=s[i];
//         }
//         for( ll i=0;i<idx;i++){
//             front+=s[i];
//         }
//         mat.push_back(front);
//         idx--;
//         }

//         // for(auto it:mat){
//         //     cout<<it<<endl;
//         // }
//         vector<vector<ll> >grid(n,vector<ll>(n,0));
//         for(ll i=0;i<n;i++){
//             for( ll j=0;j<n;j++){
//                 if(mat[i][j]=='1'){
//                     grid[i][j]=1;
//                 }
//             }
//         }

//         // for(ll i=0;i<n;i++){
//         //     for( ll j=0;j<n;j++){
//         //         cout<<grid[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }

//         vector<vector<ll> >memo(n,vector<ll>(n,-1));
//         ll ans=0;
//         for (ll i = 0; i < n; i++) {
//             for (ll j = 0; j < n; j++) {
//                 maxRectangleArea(i, j, grid, ans, memo);
//             }
//         }
//         cout<<ans<<endl;
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

int main(){
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll n=s.length();
        s.append(s);
        ll maxones=0;
        ll count=0;
        bool flag=true;
        for(ll i=0;i<2*n;i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                flag=false;
                maxones=max(maxones,count);
                count=0;
            }
        }

        if(flag){
            cout<<n*n<<endl;
        }
        else{
            cout<<((maxones+1)/2)*((maxones+2)/2)<<endl;
        }

    }

    return 0;
}