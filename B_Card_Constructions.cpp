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

int countn=0;
int func(int n){
    int count0=2;int count1=2;
    if(n<=1) return 0;
    while(n>count1){
        count0=count0+3;
        count1=count1+count0;
        if(n<count1){
            count1=count1-count0;
            break;
        }
    }
    countn++;
    return func(n-count1);
}
void solve(){
int n;cin>>n;
func(n);
cout<<countn<<endl;
countn=0;
}      

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    solve();
    return 0;
}
return 0;
}