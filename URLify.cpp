#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hi"<<endl;
   string s; 
    // Use getline() to take input with spaces 
    getline(cin, s);
    int n=s.size();
    cout<<"size"<<n<<endl;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            ans+=s[i];
        }
        else{
            ans+="%20";
        }
    }
    cout<<ans<<endl;
}