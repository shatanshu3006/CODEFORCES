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
using ull = unsigned long long;
using ld = long double;

const int MAX = 1e6 + 1;
vector<int> divisors(MAX, 0);

// Precompute number of divisors for all numbers from 1 to 1e6
void precomputeDivisors() {
    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j += i) {
            divisors[j]++;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precomputeDivisors(); // precompute before handling queries

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << divisors[n] << '\n';
    }

    return 0;
}