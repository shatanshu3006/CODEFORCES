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
        int n,k;cin>>n>>k;
        vector<int>arr;
        map<int,vector<int> >mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            mp[arr[i]].push_back(i);
        }

        int maxi=n;
        for(auto it:mp){
            vector<int>index=it.second;
            vector<int>gap;

            if(index.size()==1){
                gap.push_back(index[0]);
                gap.push_back(n-1-index.back());
            }
            else{
            gap.push_back(index[0]);
            
            for(int i=1;i<index.size();i++){
                gap.push_back(index[i]-index[i-1]-1);
            }
            gap.push_back(n-1-index.back());
            }
            

            sort(gap.begin(),gap.end());

            int large=gap[gap.size()-1];
            int second_large=gap[gap.size()-2];
        
            maxi=min(max(large/2,second_large),maxi);
        }

        cout<<maxi<<endl;
    }
}