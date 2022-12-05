#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<long,long> vll;
typedef pair<int,int> pi;
#define pb(x) push_back(x)
#define mp make_pair
                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!
                    
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
string s;
cin>>s;
set<char> st;
for(int i=0;i<s.length();i++){
    if(s[i]>=97){
        st.insert(s[i]);
        st.insert(s[i]-32);
    }
    else if(s[i]<97){
        st.insert(s[i]);
        st.insert(s[i]+32);
    }
}
if(st.size()==52){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}