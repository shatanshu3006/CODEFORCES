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
int t;
cin>>t;
while(t--){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int w1=max(arr[0],arr[1]);
    int w2=max(arr[2],arr[3]);
    sort(arr,arr+4);
    if((w1==arr[3] || w1==arr[2]) && (w2==arr[2] || w2==arr[3])){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
return 0;
}