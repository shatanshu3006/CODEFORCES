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
    ll n;
    cin>>n;
    int cnt1=0;
    int cnt2=0;
    while(n%2==0){
        n=n/2;
        cnt1++;
    }
    while(n%3==0){
        n=n/3;
        cnt2++;
    }
    if(n==1 && cnt1<=cnt2){
        cout<<2*cnt2-cnt1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
}
return 0;
}