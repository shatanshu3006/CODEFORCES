#include <iostream>
using namespace std;
#include <bits/stdc++.h>
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    int minimum=INT_MAX, ans=0;
    for(int i=0;i<n;++i){
        cin>>v[i];
        minimum=min(minimum,v[i]);
    }
    for(int i=0;i<n;++i){
        ans=ans+v[i]-minimum;
    }
    cout<<ans<<endl;

}

return 0;
}