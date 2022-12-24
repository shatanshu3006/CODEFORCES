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
    int n ,k;
    cin>>n>>k;
    if(n<k){
        cout<<"NO"<<endl;
    }
    else if(n==k and n>1){
        cout<<"NO"<<endl;
    }
    else if(n%k==0 && n%2!=0){
        cout<<"YES"<<endl;
    }
}
return 0;
}