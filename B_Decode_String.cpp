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
int q;
cin>>q;
while(q--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    int num;
    for(int i=0;i<n;i++){
        if(s[i]!='0'){
            num=stoi(s[i]);
            ans+=('a'+num-1);
        }
        else{
            ans.pop_back();
            ans.pop_back();
            string num2;
            num2=s.substr(i-2,2);
            int num3;
            num3=stoi(num2);
            ans+=('a'+num3-1);
        }
    }
    cout<<ans<<endl;
}
return 0;
}