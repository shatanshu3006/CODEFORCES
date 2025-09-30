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

class Node{
    public:
    int left,right;
};
vector<Node>tree;
string s;
int n;
int solve(int idx){
    if(idx==-1){
        return n;
    }
    if(tree[idx].left==0 && tree[idx].right==0){
        return 0;
    }
    int minleft=solve(tree[idx].left-1)+(s[idx]!='L');
    int minright=solve(tree[idx].right-1)+(s[idx]!='R');
    return min(minleft,minright);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;

        cin>>s;
        tree.resize(n);
        for(auto &it:tree){
            cin>>it.left>>it.right;
            
        }
        cout<<solve(0)<<endl;
    }
}