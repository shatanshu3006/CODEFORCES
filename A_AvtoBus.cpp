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
    int n;
    cin>>n;
    int remmin = n%6;
    int minbus= (n-(remmin))/6;
    int remmax = n%4;
    int maxbus = (n-(remmax))/4;
    if(n<4){
        cout<<-1<<endl;
    }
    if(n==4){
        cout<<1<<" "<<1<<endl;
    }
    if(n>4){
        if(remmin!=0 && remmax!=0){
            cout<<-1<<endl;
        }
        if(remmin==0 && remmax==0){
        cout<<(n-(n%6))/6<<" "<<(n-(n%4))/4<<endl;
    }
    } 
}
return 0;
}