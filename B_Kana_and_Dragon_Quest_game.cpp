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
    int x,n,m;
    cin>>x>>n>>m;
    if((x-m*10)<=0){
        cout<<"YES"<<endl;
    }
    else{
    while(x>0 && n>0){
        x=floor(x/2)+10;
        n--;
    }
    while(x>0 && m>0){
        x=x-10;
        m--;
    }
    if(x<=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
return 0;
}