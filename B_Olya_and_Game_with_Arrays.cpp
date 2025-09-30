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
using ull = unsigned long long;
using ld = long double;
ll mod=1e9+7;
int main(){
    int t;cin>>t;
    while(t--){
    int n; cin>>n;
    if(n==1){
        int sz;cin>>sz;
        vector<int>v(sz);
        for(int i=0;i<sz;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    else{
    int small=1e9+7;
    vector<int>second(n);
    int it=0;
    while(n--){
        int sz;cin>>sz;
        vector<int>v(sz);
        for(int i=0;i<sz;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        small=min(small,v[0]);
        // cout<<v[1]<<" ";
        second[it]=(v[1]);
        it++;
    }
    sort(second.begin(),second.end());
    // for(int i=0;i<second.size();i++){
    //     cout<<second[i]<<" ";
    // }
    ll secondsum=small;
    
    for(int i=1;i<second.size();i++){
        secondsum+=second[i];
    }
    //cout<<small<<endl;
    cout<<secondsum<<endl;
}
}
    
}