#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy;
    cin >> Tx >> Ty;

    Sx -= (Sy - Sx) % 2;
    Tx -= (Ty - Tx) % 2;
    Tx -= Sx;
    Ty -= Sy;
    Tx = abs(Tx);
    Ty = abs(Ty);
ll ans=Ty + max(0ll, (Tx - Ty) / 2);

    cout << ans << endl;

    return 0;
}