#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n==k){
        cout<<"0 0"<<endl;
    }
    if(k>n){
        cout<<"-1"<<endl;
    }
    if(k<n){
        cout<<arr[n-k]<<" "<<"0"<<endl;
    }
    return 0;
}