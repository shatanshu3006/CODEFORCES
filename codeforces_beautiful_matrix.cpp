#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
    int arr[5];
    int vertical;
    int horizontal;
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
            cin>>arr[i];
    }
    vertical= abs(3-j);
    for(int i=0;i<5;i++){
        if(arr[i]==1){
            horizontal= abs(3-i);
        }
    }
    }
    cout<<horizontal+vertical<<endl;
return 0;
}