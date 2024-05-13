#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


//Typedef
typedef long long ll;

const int N = 1e5+5;
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n),cnt(N);
    ll unq = 0, ans=0;
    for(int i=0,j=0;i<n;i++){
        cin >> a[i];
        cnt[a[i]]++;

        if(cnt[a[i]]==1) unq++;

        while(unq > k){
            cnt[a[j]]--;
            if(cnt[a[j]]==0) unq--;
            j++;
        }
        ans+=(i-j+1);
    }
    cout << ans << endl;
}

int32_t main()
{
    fastio()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif
    int t=1;
    // cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}