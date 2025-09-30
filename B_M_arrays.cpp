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
#include<climits>
#include<iomanip>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> cnt(m,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x%m]++;
        }

        int ans=0;
        if(cnt[0]>0){
            ans++;
        }
        // if(cnt[m/2]>0){
        //     ans++;
        // }
        for(int r=1;r<m;r++){
            int a=min(cnt[r],cnt[m-r]),b=max(cnt[r],cnt[m-r]);
            if(b==0){
                ans+=0;
            }
            else if(a==0){
                ans+=b;
            }
            else if(a==b){
                ans+=1;
            }
            else{
                ans+=1+b-(a+1);
            }
            cnt[r]=cnt[m-r]=0;
            }
            cout<<ans<<endl;
        

        
    }
}