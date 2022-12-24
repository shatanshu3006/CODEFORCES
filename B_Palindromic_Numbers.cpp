#include <iostream>
#include <bits/stdc++.h>
#include<string>
#define all(x) (x).begin(),(x).end()
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    string str;
    cin>>str;
    if(str[0]=='9'){
        string ans="";
        int abc=(11-(str[n-1]-'0'));
        int carry=1;
        if(abc>=10){
            abc-=10;carry=0;
        }
        ans+=(char)('0'+abc);
        for(int i=n-2;i>=0;i--){
            int val=str[i]-'0';
            val+=carry;
            if(val>8){
                ans+=(char)('0'+(18-val));
                carry=1;
            }else{
                ans+=(char)('0'+(8-val));
                carry=0;
            }
        }
       reverse(all(ans));
        cout<<ans<<endl;
    }else{
        for(int i=0;i<n;i++){
            cout<<9-(str[i]-'0');
        }
        cout<<endl;
    }
}
return 0;
}