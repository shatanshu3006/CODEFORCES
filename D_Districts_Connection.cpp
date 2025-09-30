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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        set<int>st;
        for(int i=0;i<n;i++){
            
            cin>>a[i];
            st.insert(a[i]);
        }

        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;

            int val=-1;

            for(int i=1;i<n;i++){
                
                if(a[i]!=a[0]){
                    val=i;
                    cout<<1<<" "<<i+1<<endl;
                }
            }
            for(int i=1;i<n;i++){
                if(a[i]==a[0]){
                    cout<<val+1<<" "<<i+1<<endl;
                }
            }
        }


    }
}