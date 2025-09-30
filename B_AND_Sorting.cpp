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
#include<iomanip>
typedef long long ll;
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                ans&=a[i];
            }
        }

        if(ans==-1){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}