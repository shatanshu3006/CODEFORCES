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
    if((n*(n-1)/2)%n!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        int mat[n][n];
    int pt=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==pt)   mat[i][j]=1;
            else mat[i][j]=0;
        }
        pt--;
    }
    if(n%2!=0){
        mat[n/2][n/2]=0;
        mat[(n/2)-1][n/2]=1;
        mat[(n/2)-1][(n/2)+1]=0;
        mat[n/2][(n/2)+1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    }
}
return 0;
}