#include <iostream>
#include <bits/stdc++.h>
#include<unordered_set>
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
ll n;
cin>>n;
ll a[n];  ll b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        cout<<"no"<<endl;
        break;
    }
    if(i==n-1 && a[i]==b[i]){
        cout<<"yes"<<endl;
    }
}



return 0;
}