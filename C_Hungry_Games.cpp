#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
#define int long long
                    
void solve()
{
   int n,x;cin>>n>>x;
    vector<int> arr(n);for(int i =0;i<n;i++)cin>>arr[i];
    vector<int> prefix(n,0); prefix[0] = arr[0];
    for(int i = 1;i<n;i++)prefix[i] = prefix[i-1]+arr[i];
    vector<int> dp(n,0);
    for(int i = n-1;i>=0;i--){
        int prevSum = (i-1 >=0 ? prefix[i-1] : 0);
        int j = upper_bound(prefix.begin(),prefix.end(),prevSum+x) - prefix.begin();
        if(j < n){
            dp[i] = 1 + ((j+1 < n) ? dp[j+1] : 0);
        }
    }
    int ans = 0;
    for(int i =0;i<n;i++){
        ans += (n-i)-dp[i];
    }
    cout<<ans<<endl;
   
}
                    
signed main()
{
int t=1;
cin>>t;
while(t--)
{
   solve();
}
}