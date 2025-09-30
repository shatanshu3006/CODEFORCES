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
        int n,m;
        cin>>n>>m;
        vector<vector<int>>mat(n,vector<int>(m,0));
        int cntneg=0;
        int abssum=0;
        int smallest=101;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;cin>>x;
                if(x<0)cntneg++;
                mat[i][j]=x;
                abssum+=abs(x);
                smallest=min(smallest,abs(x));
            }
        }

        if(cntneg%2==0){
            cout<<abssum<<endl;
        }
        else{
            cout<<abssum-2*(abs(smallest))<<endl;
        }
    }
}