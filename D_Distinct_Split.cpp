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
        string s;cin>>s;
        set<char>st;
        vector<int>pref(n,0),suff(n,0);
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            pref[i]=st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suff[i]=st.size();
        }
        int ans=0;
        for( int i=0;i<n-1;i++){
            ans=max(ans,pref[i]+suff[i+1]);
        }
        cout<<ans<<endl;
    }
}