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
        int n;cin>>n;
        vector<vector<char> >v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for( int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int cnt=0;
        for( int i=0;i<(n+1)/2;i++){
            for(int j=0;j<n/2;j++){
                int ones=0;
                ones += v[i][j] == '1';
                ones += v[j][n-1-i] == '1';
                ones += v[n-1-i][n-1-j] == '1';
                ones += v[n-1-j][i] == '1';
                cnt += min(ones, 4 - ones);
            }
        }
        cout<<cnt<<endl;
    }
}