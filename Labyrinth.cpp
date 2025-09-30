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

//this problem can be solved using BFS with comfort since the dfs does not guarantee the shortest path 
// for doing a dfs ,it might give the minimum but we have to explore the paths 

int n,m;
char A[1000][1000];
bool vis[1000][1000];
int previous_step[1000][1000];

// 0 = up, 1 = right, 2 = down, 3 = left
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string step_dir = "URDL";

int main(){
    
    cin>>n>>m;
    queue<pair<int,int> >q;
    pair<int,int>begin,end;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
            if(A[i][j]=='A'){
                begin=make_pair(i,j);
            }
            else if(A[i][j]=='B'){
                end=make_pair(i,j);
            }
        }
    }

    q.push(begin);
    vis[begin.first][begin.second]=true;
    while(!q.empty()){
        auto u=q.front();
        q.pop();

        for(int i=0;i<4;i++){
            auto v=make_pair(u.first + dx[i],u.second + dy[i]);

            if(v.first>=0 && v.first<n && v.second>=0 && v.second<m){
                if(A[v.first][v.second]=='#')continue;
                if (vis[v.first][v.second]) continue;
			    vis[v.first][v.second] = true;
			    previous_step[v.first][v.second] = i;
			    q.push(v);
            }

        }
    }

    if(vis[end.first][end.second]){
        cout<<"YES"<<endl;
        vector<int>steps;

        while(end!=begin){
            int p = previous_step[end.first][end.second];
			steps.push_back(p);
			// undo the previous step to get back to the previous square
			// Notice how we subtract dx/dy, whereas we added dx/dy before
			end = make_pair(end.first - dx[p], end.second - dy[p]);
        }
        reverse(steps.begin(),steps.end());

        cout<<steps.size()<<endl;
        for (char c : steps) { cout << step_dir[c]; }
		cout << endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}