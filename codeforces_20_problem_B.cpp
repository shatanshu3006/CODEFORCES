#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(s[s.length() -1] != 'B'){
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]=='B'){
                count=count-1;
            }
            else{
                count=count+1;
            }
            if(count<0){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
    }
    }
    return 0;
}