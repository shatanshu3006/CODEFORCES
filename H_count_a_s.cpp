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
string s;
cin>>s;
int t;
cin>>t;
while(t--){
    int l,r;
    cin>>l>>r;
    int count=0;
    vector<int> v;
    for(int i=l;i<=r;i++){
        if(s[i-1]=='a'){
            count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}