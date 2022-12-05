#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        if(n>=3){
            for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
                cout<<arr[i]<<endl;
                break;
            }
            else{
                for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1] && arr[i+1]!=arr[i+2]){
                cout<<"-1"<<endl;
                break;
            }
        }
        break;
            }
        }
        
        }
        
        if(n<3){
            
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            cout<<"-1"<<endl;
        }
    }
    return 0;
}