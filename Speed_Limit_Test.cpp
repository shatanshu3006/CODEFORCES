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
    float a,x,b,y;
    cin>>a>>x>>b>>y;
    if(a/x > b/y){
        cout<<"Alice"<<endl;
    }
    else if(a/x < b/y){
        cout<<"Bob"<<endl;
    }
    else if(a/x==b/y){
        cout<<"Equal"<<endl;
    }
}
return 0;
}