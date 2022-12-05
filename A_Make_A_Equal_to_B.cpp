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
    int n;cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int same=0;
    for(int i=0;i<n;i++){
       
            if(arr1[i]==arr2[i]){
                same++;
            }
    
    }
    if(same==n){
        cout<<0<<endl;
    }
    else{
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(arr1[i]==1){
                count1++;
            }
            if(arr2[i]==1){
                count2++;
            }
        }
        if(count1==count2){
            cout<<1<<endl;
        }
        else{
            int equal1=0;
            
            for(int i=0;i<n;i++){
                if(arr1[i]==arr2[i] && arr1[i]==1){
                    equal1++;
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+n);
            int equal2=0;
            for(int i=0;i<n;i++){
                if(arr1[i]==arr2[i] && arr1[i]==1){
                    equal2++;
                }
            }
            if(equal1==equal2){
                cout<<abs(count1-count2)<<endl;
            }
            else{
                cout<<abs(count1-count2)+1<<endl;
            }
        }
        
    }
    
}
return 0;
}