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

bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.first>b.first;
}
ll mod=1e9+7;
int main(){
    int n,tg;
    cin>>n>>tg;
    

    vector<pair<int,int> >vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i].first;
        vp[i].second=i+1;

        
    }
    // int a=-1,b=-1,c=-1;
    bool flag=true;
    sort(vp.begin(),vp.end());
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;

        while(l<r){
            int sum=vp[i].first+vp[l].first+vp[r].first;
            if(sum==tg){
                cout<<vp[i].second<<" "<<vp[l].second<<" "<<vp[r].second<<endl;
                return 0;
            }
            else if(sum>tg){
                r--;
            }
            else{
                l++;
            }
        }
    }
    if(flag){
        cout<<"IMPOSSIBLE";
    }
    
    return 0;
    
}