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
int a,b,c;
cin>>a>>b>>c;
int rem=(c-a);
if((rem-rem%b)%2==0 && (rem-rem%b)>2 ){
    cout<<"Lucky Chef"<<endl;
}
else{
    cout<<"Unlucky Chef"<<endl;
}
return 0;
}