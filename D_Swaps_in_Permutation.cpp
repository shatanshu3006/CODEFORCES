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

const int inf=1e9+227;
const ld EPS=1e9-7;

int n,m;
const int MAXN = 1e6 + 228;

vector<int>g[MAXN];
vector<int>cmp;

int used[MAXN];

//cmp is userd for marking the visited in that component
void dfs(int v){            //v is for vertex to go deep using dfs
    used[v]=1;
    cmp.push_back(v);

    for(int i:g[v]){
        if(!used[i]){
            dfs(i);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;

    vector<int> a(n+1);
    //input of the initial permutation
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    while(m--){
        int a,b;
        cin>>a>>b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        if(used[i])continue;
        cmp.clear();
        dfs(i);

        vector<int>val;
        for (int j : cmp) val.push_back(a[j]);

        sort(cmp.begin(),cmp.end());
		sort(val.begin(),val.end());

        reverse(val.begin(),val.end());

        for (int j = 0; j < cmp.size(); ++j)
		{
			a[cmp[j]] = val[j];
		}
    }

    for (int i = 1; i <= n; ++i)
	{
		cout << a[i] << ' ';
	}

    
}