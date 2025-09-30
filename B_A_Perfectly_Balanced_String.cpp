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
        string s;
        cin>>s;
        int n =s.length();
        set<char> st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        bool found=true;
        int count=st.size();
        for(int i=count;i<n;i++){
            if(s[i-count]!=s[i]){
                found=false;
                break;
            }
        }
        if(found==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}