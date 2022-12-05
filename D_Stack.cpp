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
stack<int> s;
string a;
int b;
while(t--){
    cin>>a;
    if(a=="push"){
        cin>>b;
        s.push(b);
    }
    else if(a=="pop"){
        s.pop();
    }
    else{
        cout<<s.top()<<endl;
    }
    
}
return 0;
}