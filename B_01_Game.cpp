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
    string s;
    int count=0;
    cin>>s;
    int n=s.length();
    int c1=0;
    int c0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            c1++;
        }
        else{
            c0++;
        }
    }
    if(min(c0,c1)%2!=0){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
}
return 0;
}