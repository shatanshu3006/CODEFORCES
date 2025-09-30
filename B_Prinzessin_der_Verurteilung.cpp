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

vector<string> store;
void precomp(){

    for(char a='a';a<='z';a++){
        string s1(1,a);
        store.push_back(s1);
    }
    for(char a='a';a<='z';a++){
        string s1(1,a);
        store.push_back(s1);
        for(char b='a';b<='z';b++){
            string s2=s1+b;
            store.push_back(s2);
        }
    }


for(char a='a';a<='z';a++){
    string s1(1,a);
    store.push_back(s1);
    for(char b='a';b<='z';b++){
        string s2=s1+b;
        store.push_back(s2);
        for(char c='a';c<='z';c++){
            string s3=s2+c;
            store.push_back(s3);
        }
    }
}

// sort(store.begin(),store.end());
}

int main(){
    ll t;
    cin>>t;
    precomp();
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        string ans="";
        for(auto st:store){
            if(s.find(st)==string ::npos){
                ans=st;
                break;
            }
        }
        cout<<ans<<endl;

        // for(auto it:store){
        //     cout<<it<<" ";
        // }
    }
}