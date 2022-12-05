#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<long,long> vll;
typedef pair<int,int> pi;
#define pb(x) push_back(x)
#define mp make_pair
                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!
                    
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int arr[n];
int flag=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    
}
sort(arr,arr+n);
for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
        cout<<arr[i]<<endl;
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<"NO"<<endl;
}
return 0;
}