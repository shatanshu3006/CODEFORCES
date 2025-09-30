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

int longestcommonstringlength(int i, int j, const string &a, const string &b,vector<vector<int>>&dp) {
    if (i == 0 || j == 0) {
        return 0;
    }
    if (dp[i][j] != -1) return dp[i][j];
    if (a[i - 1] == b[j - 1]) {
        dp[i][j] = 1 + longestcommonstringlength(i - 1, j - 1, a, b, dp);
    } else {
        dp[i][j] = 0;
    }
    return dp[i][j];
}

int main(){
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        int n=a.length(),m=b.length();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // int mx = 0;
        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=m; j++){
        //         int length = longestcommonstringlength(i,j,a,b,dp);
        //         mx = max(mx,length);
        //     }
        // }
        // cout<<n+m-(2*mx)<<endl;

        int ans=0;

        for(int len=1;len<=min(n,m);len++){
            for( int i=0;i+len<=n;i++){
                for(int j=0;j+len<=m;j++){
                    if(a.substr(i,len)==b.substr(j,len)){
                        ans=max(ans,len);
                    }
                }
            }
        }
        cout<<n+m-(2*ans)<<endl;
    }
}