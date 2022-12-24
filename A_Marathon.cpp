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
    int arr[4];
    int count=0;
    for(int i=0;i<4;i++){ 
        cin>>arr[i];
    }
    for(int i=1;i<4;i++){
        if(arr[0]<arr[i]){
            count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}