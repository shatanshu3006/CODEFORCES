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

int mod=1e9+7;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res;
    char lst0='a';char lst1='a';
    for(int i=0;i<n;i++){
        if(s[i]>=lst0){
            res+='0';
            lst0=s[i];
        }
        else if(s[i]>=lst1){
            res+='1';
            lst1=s[i];
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl<<res<<endl;

    return 0;
}