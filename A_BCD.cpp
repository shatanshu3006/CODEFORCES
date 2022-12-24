#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long n,k;
cin>>n>>k;
if(n%k==0){
    cout<<n/k<<endl;
}
if(n%k!=0 && n>k){
    cout<<n/k +1<<endl;
}
if(n<k){
    cout<<1<<endl;
}
if(n==k){
    cout<<1<<endl;
}
return 0;
}