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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());

        bool dup=false;
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]){
                dup=true;
                break;
            }
        }
        if(dup){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}