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
int n,b;
cin >> n;
int mas[n];
    for (int i = 1; i <= n; i++){
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++){
        cout << mas[i] << " ";
    }
return 0;
}