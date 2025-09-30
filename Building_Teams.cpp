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

int mod=1e9+7;
vector<int>g[2000011];
vector<int>color;
vector<pair<int,int> >edges;

bool bipartite;
void dfs(int v,int c,vector<int>&vis){
    vis[v]=1;
    color[v]=c;
    for(auto it:g[v]){
        if(color[it]==-1 && !vis[it]){  //unvisited
            dfs(it,c^1,vis);
        }
        else if(color[it]!=-1 || vis[it]){
            if(color[it]==color[v]){
                bipartite=false;
                //return;
            }
        }
    }

}

// void bfs(int node,vector<vector<int> >&g,vector<int>&vis,vector<int>&connected_components){

//     queue<int>q;
//     q.push(node);

//     while(!q.empty()){
//         int front=q.front();
//         q.pop();
//         connected_components.push_back(front);

//         for(auto it:g[front]){
//             if(!vis[it]){
//                 vis[it]=1;
//                 q.push(it);
//             }
//         }
//     }
// }

// void concomp(vector<vector<int> >&g,vector<pair<int,int> >&edges,vector<vector<int> >&connected_components_set){
//     vector<int>vis(g.size(),0);
    
//     for(int i=0;i<g.size();i++){
//         vector<int>connected_components;
//         if(!vis[i]){
//             vis[i]=1;
//             bfs(i,g,vis,connected_components);
//             connected_components_set.push_back(connected_components);
//         }
//     }
// }

int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;

        x--;y--;
        g[x].push_back(y);
        g[y].push_back(x);
        edges.push_back(make_pair(x,y));
    }

    color=vector<int>(n,-1);
    bipartite=true;

    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
        dfs(i,0,vis);
        if(!bipartite){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
    }
    }

    // //implement graph coloring on each connected component
    // vector<vector<int> >connected_components_set;
    // concomp(g,edges,connected_components_set);

    // for(int i=0;i<connected_components_set.size();i++){
    //     //check if this connected component is bipartite, if no , return impossible
    //     for(auto it:connected_components_set[i]){
    //         bipartite=true;
    //         dfs(it,0);
    //         if(bipartite==false){
    //             cout<<"IMPOSSIBLE"<<endl;
    //             return 0;
    //         }
            
    //     }
    // }

    for(int i=0;i<n;i++){
        cout<<color[i]+1<<" ";
    }
    cout<<endl;

}

