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
#include<iomanip>
typedef long long ll;
using namespace std;
int n=1e5+11,m;
vector<vector<int>>adj(n);
vector<int>a(n);

int ans=0;

void dfs(int u,int parent, int numConsecutive,int maxConsecutive){
    if(a[u]==1){
        numConsecutive++;
    }
    else{
        numConsecutive=0;
    }
    maxConsecutive=max(maxConsecutive,numConsecutive);  //for each node the max number of consecutive cats in the path form 1 to that node

    int numChildren=0;
    for(int v:adj[u]){
        if(v!=parent){
            dfs(v,u,numConsecutive,maxConsecutive);
            numChildren++;
        }
    }

    if(numChildren==0 && maxConsecutive<=m){
        ans++;
    }
}
int main(){

    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1,0,0);
    cout<<ans<<endl;
}