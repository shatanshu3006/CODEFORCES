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

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        
        vector<vector<ll> >mat(m,vector<ll>(n));  //storing a rotated matrix
        for(ll j=0;j<n;j++){
            for(ll i=0;i<m;i++){
                cin>>mat[i][j];
            }
        }
        for(ll i=0;i<m;i++){
            sort(mat[i].begin(),mat[i].end());      //O(nlogn)
        }   //m*O(nlogn)

        long long ans=0;

        for(ll i=0;i<m;i++){
            for( ll j=0;j<n;j++){
                ans-=mat[i][j]*(n-j-1);
                ans+=mat[i][j]*j;
            }
        }
        cout<<ans<<endl;
        

    }
}