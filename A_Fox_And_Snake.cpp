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
int r,c;
cin>>r>>c;
for(int i=1;i<=r;i++){
if(i%2!=0){
    cout<<string(c,'#')<<endl;
}
else if (i==2){
    cout<<string((c-1),'.')<<'#'<<endl;
}
else if(i%4==2){
    cout<<string((c-1),'.')<<'#'<<endl;
}
else{
    cout<<'#'<<string((c-1),'.')<<endl;
}
}
return 0;
}