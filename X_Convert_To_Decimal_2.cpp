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
int count=0;
while(t--){
    int n;
    cin>>n;
    int count=0;
    while(n){
        if(n%2!=0){
            count++;
        }
       n=n/2;
    }
    cout<<pow(2,count)-1<<endl;


   
}
return 0;
}