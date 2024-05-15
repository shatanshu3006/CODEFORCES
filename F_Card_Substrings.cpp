
#include <bits/stdc++.h>

using namespace std;



int main() {
    const int MAXN = 1e5 + 5;

int n, m;
string s,t;

    cin>>n>>m;
    cin>>s;
    cin>>t;
    map<char,int>mp1,mp2;
    for (int i = 0; i < m; ++i) mp1[t[i]]++;
    int l = 0,r=0;
    long long ans = 0;
    while(r<n) {
        mp2[s[r]]++;
        if (mp2[s[r]] > mp1[s[r]]) {
            while (s[l] != s[r]) {
                mp2[s[l]]--;
                l++;
            }
            mp2[s[l]]--;
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout<<ans<<endl;
    return 0;
}