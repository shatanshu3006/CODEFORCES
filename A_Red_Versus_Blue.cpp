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

        int n,r,b;cin>>n>>r>>b;
        string s="";
        int val=r/(b+1);
        int mn=r%(b+1);
        for(int i=0;i<=b;i++){
            for(int j=0;j<val;j++){
                s+='R';
            }
            if(mn>0){
                s+='R';
                mn--;
            }
            if(i<b){
                s+='B';
            }
        }

        cout<<s<<endl;
        // cout<<s<<endl;
        
    }
}