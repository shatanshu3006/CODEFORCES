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
    int n;
    cin>>n;
    string a[3][n];
    map<string,int> mp;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }
    for(int i=0;i<3;i++){
        int total=0;
        for(int j=0;j<n;j++){
        
        if(mp[a[i][j]]==1){
        total+=3;
        }
        else if(mp[a[i][j]]==2){
            total++;
        }
        
        }
        cout<<total<<" ";
    }
    cout<<endl;
}
return 0;
}