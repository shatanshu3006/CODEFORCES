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
deque<int> q;
while(t--){
    cin >> a;
     if (a == "push_back")
     {
       cin >> b;
       q.push_back(b);
     }
     else if (a == "push_front")
     {
       cin >> b;
       q.push_front(b);
     }
     else if (a == "pop_front")
     {
       q.pop_front();
     }
     else if (a == "pop_back")
     {
       q.pop_back();
     }
     else if(a=="front"){
       cout << q.front()<<'\n';
     }
     else if (a == "back")
     {
       cout << q.back() << '\n';
     }
     else {
       cin >> b;
       cout << q[b - 1] << '\n';
     }

}
return 0;
}