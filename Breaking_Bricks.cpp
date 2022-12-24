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
    int s,w1,w2,w3;
    cin>>s>>w1>>w2>>w3;
    int sum=w1+w2+w3;
    if(s>=sum){
        cout<<1<<endl;
    }
    else if(s>=w1+w2 || s>=w2+w3){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
}
return 0;
}