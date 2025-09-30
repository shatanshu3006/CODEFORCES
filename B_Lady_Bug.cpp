#include <iostream>
#include <math.h>
using namespace std;

void solve(){
	int n;
    cin >> n;
    long long tot = 0, odd = 0;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        tot += x;
        odd += (x % 2);
        mx = max(mx, x);
    }
    if(odd == 0 || odd == n){
        cout << mx << endl;
        return;
    }
    cout << tot - (odd - 1) << endl;
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
