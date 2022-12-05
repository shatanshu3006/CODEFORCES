#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1] && s[i]!=s[i-1]){
                flag=1;
            }
            if(n>1 && s[0]!=s[1]){
                flag=1;
            }
            if(n>1 && s[n-1]!=s[n-2]){
                flag=1;
            }
            if(n==1){
                flag=1;
            }
            if(flag){
                cout<<"NO"<<endl;
                break;
            }
            else{
                cout<<"YES"<<endl;
                break;
            }
                
        }
    }
    return 0;
}