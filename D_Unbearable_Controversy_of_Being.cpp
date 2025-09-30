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
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,m,ans=0;
    cin>>n>>m;
    ll u,v;
    // ll edges[n][n]={0};
    vector<vector<ll> > edges(n, vector<ll>(n, 0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    vector<ll>adj[n];
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        u--;v--;
        edges[u][v]=1;
        adj[u].push_back(v);
    }
    
    for(ll i=0;i<n;i++){
        ll res=0;
        for(ll j=0;j<n;j++){
            res=0;
            if(i!=j){
                for(ll it:adj[i]){
                    if(edges[it][j]){
                        res++;
                    }
                }
                ans+=res*(res-1)/2;
            }
        }
    }
    cout<<ans<<endl;
}