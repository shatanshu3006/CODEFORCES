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
        int n,x;
        cin>>n>>x;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        // int low=0;
        // int high=1000000000;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int left=v[i]-x;
        //     int right=v[i]+x;

        //     low=max(left,low);
        //     high=min(high,right);

        //     if(low>high){
        //         count++;
        //         low=left;
        //         high=right;
        //     }
        // }

        vector<pair<int,int> >segs(n);
        for(int i=0;i<n;i++){
            segs[i]=make_pair(v[i]-x,v[i]+x);
        }


            int count=0;
            int l=segs[0].first;
            int r=segs[0].second;
        for(int i=1;i<n;i++){
            l=max(l,segs[i].first);
            r=min(r,segs[i].second);

            if(l>r){
                count++;
                l=segs[i].first;
                r=segs[i].second;
            }
        }

        cout<<count<<endl;
    }
}