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
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    if(min(r1,r2)>=max(l1,l2)){
        cout<<max(l1,l2)<<endl;
    }
    else{
        cout<<l1+l2<<endl;
    }
}
return 0;
}