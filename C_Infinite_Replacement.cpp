#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string A;
    cin>>A;
    string T;
    cin>>T;
    int flag=0;
    for(int i=0;i<T.size();i++){
        if(T[i]=='a'){
            flag=1;
        }
    }
    if(flag==1){
        if(T.size()==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    else{
        cout<< (long long) pow(2, A.size())<<endl;
    }
}
return 0;
}