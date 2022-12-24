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
    int a,b; //a is  the number of zeroes, b is the number of ones
    cin>>a>>b;
string s="";
int count0=0;
int count1=0;
if(a>b){
    for(int i=0;i<(a+b);i++){
        if(i%2==0){
            s.append("0");
            count0++;
        }
        else{
            s.append("1");
            count1++;
        }
        if(count1==b){
            break;
        }
    }
    for(int i=0;i<(a-count0);i++){
        s.append("0");
    }
    cout<<s<<endl;
}
else{
    for(int i=0;i<(a+b);i++){
        if(i%2==0){
            s.append("0");
            count0++;
        }
        else{
            s.append("1");
            count1++;
        }
        if(count0==a){
            break;
        }
    }
    for(int i=0;i<(b-count1);i++){
        s.append("1");
    }
    cout<<s<<endl;
}
}


return 0;
}