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
int n;
string s[110];
cin>>n;
for(int i=0;i<n;i++){
    int flag=0;
    cin>>s[i];
    for(int j=0;j<i;j++){
        if(s[i]==s[j]){
            flag=1;break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}