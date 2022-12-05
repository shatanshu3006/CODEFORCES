#include <iostream>
#include <bits/stdc++.h>
#include<string.h>
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string s1="";
    string s2="";
    for(int i=0;i<(k + 1);i++){
        for(int j=2*k + 1; j>=k+2;j--){
            if(s[i]==s[j]){
                s1=s1+s[i];
                s2=s2+s[j];
            }
        }
    }
   cout<<s1<<endl;
   cout<<s2<<endl;

    
}
return 0;
}