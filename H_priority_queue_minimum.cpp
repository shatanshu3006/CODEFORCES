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
string a;
int b;
priority_queue<int,vector<int>,greater<int> > q;
while(t--){
    cin>>a;
    if (a == "push")
     {
       cin >> b;
       q.push(b);
     }
     else if (a == "pop")
     {
       q.pop();
     }
     else
     {
       cout << q.top() << '\n';
     }
}
return 0;
}