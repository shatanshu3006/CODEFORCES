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
        string s;
        cin>>s;
        stack<char> st;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()&&st.top()=='('){
                    st.pop();
                }
                else{
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}