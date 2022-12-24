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
int t ;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<"YES"<<endl;
    }
    else{
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(s[i]!=s[i+1] && s[i]==s[j]){
                    count++;
                }
            }
        } 
        if(count>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}