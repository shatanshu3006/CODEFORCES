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
#include<random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<climits>
#include<iomanip>
typedef long long ll;
using namespace std;

ll M = 1e9 + 7;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        int x;
        cin>>x;
        int p=find(a.begin(),a.end(),x)-a.begin();
        cout<<p+1<<" ";
        rotate(a.begin(),a.begin()+p,a.begin()+p+1);
    }

}