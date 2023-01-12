#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    stack<string>st;
    while(t--){
        string s;cin>>s;
        st.push(s);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;

}