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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int, greater<int> > mp;
        for(int i=0;i<(n*(n-1))/2;i++){
            int a;
            cin>>a;
            mp[a]++;
        }

    
        int count=0;
        for(auto i:mp){
            while(i.second>0){
                cout<<i.first<<" ";
                i.second=i.second-count;
                count+=1;
            }
        }
    }

    return 0;
}