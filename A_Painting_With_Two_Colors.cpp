#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<iterator>
#include<bitset>
#include<functional>
#include <random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<iomanip>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n,a,b;
        cin >> n >> a >> b;
        bool flag1 = false, flag2 = false;

        if ((n - a) % 2 == 0) {
            flag1 = true;
        }

        if ((n - b) % 2 == 0) {
            flag2 = true;
        }

        if (flag2) {
            if (b >= a) {
                cout << "YES" << endl;
            } else if (flag1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
