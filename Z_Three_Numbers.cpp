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
ll k,s;
cin>>k>>s;
ll count=0;
for(ll i=0;i<k;i++){
    for(ll j=0;j<k;j++){
        int z=s-i-j;
        if(z>=0 && z<=k){
            count++;
        }
    }
}
cout<<count<<endl;
return 0;
}