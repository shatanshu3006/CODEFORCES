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
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int zerocount=count(v.begin(),v.end(),0);
    if(zerocount>0){
        cout<<n-zerocount<<endl;
    }
    else{
        bool same=false;
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                same=true;
            }
        }
        if(same){
            cout<<n<<endl;
        }
        else{
            cout<<n+1<<endl;
        }
    }
}
return 0;
}