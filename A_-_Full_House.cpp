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
vector<int> a(5);
    for(int i = 0; i < 5; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if((a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[4])) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}