#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int cost(string a,string b){
    int val=0;
    for(int i=0;i<a.size();++i){
        val += abs(a[i]-b[i]);
    }
    return val;
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            ans=min(ans,cost(s[i],s[j]));
        }
    }
    cout<<ans<<endl;
}
return 0;
}