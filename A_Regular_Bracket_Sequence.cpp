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
int count=0;
int n=s.length();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n-1;j++){
        if(s[i]=='(' && s[j]==')'){
            s[i]='0';
            s[j]='0';
            
            break;
        }
    }
}
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        count++;
    }
}
cout<<s<<endl;
cout<<count<<endl;

return 0;
}