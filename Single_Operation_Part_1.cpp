#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int l,count=0;
        cin>>l;
        char str[l];
        cin>>str;
        for(int i=0;str[i]!='0';i++){
            if(str[i]=='1'){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}