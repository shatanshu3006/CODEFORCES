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
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            pas++;
            
            if (pas == 5) {
                break;
            }
        }
    }
    if (pas == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
return 0;
}