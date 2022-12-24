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
    int s ;
    cin>>s;
    int f=9;
    vector <int> v;
    while(s){
        if(s>f){
            v.push_back(f);s=s-f;f--;
        }
        else{
            v.push_back(s);s=0;
        }
    }
    int ans=0;
    for(int i=v.size()-1;i>=0;i--){
        ans=(ans*10 + v[i]);
    }
    cout<<ans<<endl;
}
return 0;
}