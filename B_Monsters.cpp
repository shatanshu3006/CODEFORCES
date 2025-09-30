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

ll mod=1e9+7;

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first>b.first;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
        }
        vector<pair<int,int> >vp;
        for( int i=0;i<n;i++){
            if(arr[i]%k!=0){
            vp.push_back(make_pair(arr[i]%k,i));
            }
            else{
                vp.push_back(make_pair(k,i));
            }
        }
        sort(vp.begin(),vp.end(),cmp);
        for( int i=0;i<vp.size();i++){
            cout<<vp[i].second+1<<" ";
        }
        cout<<endl;
        }

}