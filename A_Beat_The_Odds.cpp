#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
long long t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even_count=0;int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        if(arr[i]%2!=0){
            odd_count++;
        }
    }
    cout<<min(even_count,odd_count)<<endl;
}
return 0;
}