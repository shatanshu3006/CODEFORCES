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

vector<int>g[2000000];
vector<pair<int,int> >e;
vector<int>color;
bool bipartite;

void dfs(int v,int c){
    color[v]=c;
    for(auto it:g[v]){
        if(color[it]==-1){
            dfs(it,c^1);
        }
        else{
            if(color[it]==color[v]){
                bipartite=false;
                return;
            }
        }

    }
}

int main(){
    int t;cin>>t;
    int k=1;
    while(t--){
        int n,m;cin>>n>>m;
        for(int i=0;i<n;i++){   //reset the graph for this new testcase
            g[i].clear();
        }
        e.clear();  //reset the edges too
    

    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        x--;y--;
        g[x].push_back(y);
        g[y].push_back(x);
        e.push_back(make_pair(x,y));
    }

    color=vector<int>(n,-1);
    bipartite=true;

    for(int i=0;i<n;i++){
        if(color[i]==-1){
        dfs(i,0);
        }
    }

    if(!bipartite){
        cout<<"Scenario #"<<k<<":"<<endl;
        cout<<"Suspicious bugs found!"<<endl;
    }
    else{

    cout<<"Scenario #"<<k<<":"<<endl;
    cout<<"No suspicious bugs found!"<<endl;
    }
    k++;

    }
}