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
int k=n/2+1;
    int s=k;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j<=k && j>=s){
                cout<<"*";
            }
            else if(j<n/2+1){
                cout<<" ";
            }
        }
        k++;
        s--;
        cout<<endl;
    }
    return 0;
}