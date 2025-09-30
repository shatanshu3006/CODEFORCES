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

//the belo code works fine but in this system the compiler is messed up

vector<pair<int,int> > dir = {make_pair(0,1),make_pair(0,-1),make_pair(1,0),make_pair(-1,0)};

void dfs(int row,int col,vector<vector<char> >&mat,vector<vector<int> >&vis,vector<pair<int,int> >&temp){
    int n=mat.size(),m=mat[0].size();
    vis[row][col]=1;
    temp.push_back(make_pair(row,col));

    for(int i=0;i<4;i++){
        int nr=row+dir[i].first;
        int nc=col+dir[i].second;

        if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && mat[nr][nc]=='.'){
            dfs(nr,nc,mat,vis,temp);
        }
    }

}

int mod=1e9+7;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char> >mat(n,vector<char>(m,'0'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            mat[i][j]=x;
        }
    }
    vector<vector<pair<int,int> > >ans;
    vector<vector<int> >vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && mat[i][j]=='.'){
                vector<pair<int,int> >temp;
                dfs(i,j,mat,vis,temp);
                ans.push_back(temp);
            }
        }
    }
    cout<<ans.size()<<endl;
}