#include <bits/stdc++.h>
using namespace std; 

#define ll long long

void solve(){
    int n, q;
    cin >> n >> q;

    vector<ll>dp(n+1);
    vector<ll>lstAdd(n+1);

    for (int i = 1; i <= n; i++){
        int a, v; 
        cin >> a >> v;

        if (a == 1){
            lstAdd[i] = v;
            dp[i] = dp[i - 1] + 1;
        }
        else{
            lstAdd[i] = lstAdd[i - 1];
            dp[i] = ((v + 1) > 2e18 / dp[i - 1]) ? (ll)2e18 : dp[i - 1] * (v + 1);
        }
    }
    while (q--){
        ll k; 
        cin >> k;

        while (true){
            int pos = lower_bound(dp.begin(), dp.end(), k) - dp.begin();
            
            if (dp[pos] == k){
                cout<<lstAdd[pos]<<" \n"[q == 0];
                break;
            }
            if (k % dp[pos - 1] == 0){
                cout<<lstAdd[pos - 1]<<" \n"[q == 0];
                break;
            }
            k %= dp[pos - 1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int tc; 
    cin >> tc;
    
    while (tc--) 
        solve();
}