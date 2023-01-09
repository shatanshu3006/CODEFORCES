#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, k; cin >> n >> k;
    vector <int> v;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        v.push_back(n);
    if (v.size() < k)
        cout << "-1";
    else {
        int m = v.size();
        for (int i = k; i < m; i++)
            v[k - 1] *= v[i];

        for (int i = 0; i < k; i++)
            cout << v[i] << ' ';
    }
}