#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// evenness is if a number is even or odd .
int count_even=0;
int count_odd=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
count_even++;
    }
    else{
        count_odd++;
    }
}
if(count_odd==1){
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<i+1<<endl;
        }
    }
}
if(count_even==1){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<i+1<<endl;
        }
    }
}

return 0;
}