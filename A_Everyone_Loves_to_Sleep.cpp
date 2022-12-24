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
    int n,H,M;
    cin>>n>>H>>M;
    int time=60*H +M;
    int ans= 24*60;
    while(n--){
        int h,m;
        cin>>h>>m;
        int time2=60*h +m -time;
        if(time2<0){
            time2=time2+24*60 ;
        }
        ans=min(ans,time2);
    }
    cout<<ans/60<<" "<<ans%60<<endl;
}
return 0;
}