#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
int ans=0;
    while(n--){
        int sum=0;
        int a,b,c;
        cin>>a>>b>>c;
        int p=a+b+c;
        if(p>=2)ans++;
    }
    cout<<ans<<endl;
}