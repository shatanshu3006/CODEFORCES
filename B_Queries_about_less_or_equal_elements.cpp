#include <bits/stdc++.h>

using namespace std;
#define output(x) cout << x << endl
#define ll long long

ll binarySearch(vector<ll> &avec, ll num, ll n) {
    ll left = 0;
    ll right = n-1;
    ll mid = 0;

    while (left <= right) {
        mid = (left+right)/2;

        if (left == right) {
            break;
        }

        if (avec[mid] <= num) {
            left = mid+1;
        }
        else {
            right = mid;
        }
    }

    if (avec[mid] <= num) {
        return mid+1;
    }

    return mid;
}

int main()
{ 
    ll a, b;
    cin >> a >> b;
    vector<ll> avec(a);

    for(int i=0;i<a;i++){
       cin>>avec[i];
    }

    sort(avec.begin(), avec.end());

    ll curr;

    while (b--) {
        cin >> curr;

            ll ans = binarySearch(avec, curr, a);
            cout<<ans<<" ";
         

    }

    cout << "\n";
    return 0;
}