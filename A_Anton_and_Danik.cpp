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
cin>>n;
string s;
cin>>s;
int countA=0; int countD=0;
for(int i=0;i<n;i++){
if(s[i]=='A'){
countA++;
}
else{
    countD++;
}
}
if(countA>countD){
    cout<<"Anton"<<endl;
}
if(countA<countD){
    cout<<"Danik"<<endl;
}
if(countA==countD){
    cout<<"Friendship"<<endl;
}
return 0;
}