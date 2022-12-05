#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string sign="";
    string number="";
    int a=s.length();
    for(int i=0;i<a;i++){
        if( s[i]=='+' || s[i]=='-'){
            sign+=s[i];
        }
    }
    sort(sign.begin(),sign.end());
    for(int i=0;i<a;i++){
        if(s[i]!='+' || s[i]!='-'){
            number+=s[i];
        }
    }
    sort(number.begin(),number.end(),greater<char>());
    int b=sign.length();
    string ans1="";
    int z;
    for(int i=0;i<a-2*b;i++){
        ans1+=number[i];
        z=i+1;
    }
    string ans2="";
    for(int i=0;i<b;i++){
        ans2+=sign[i];
        ans2+=number[z];   z++;
    }
    cout<<ans1+ans2<<endl;
}
int main(){
int t;
cin>>t;

while(t--){
    solve();
}
    return 0;
}