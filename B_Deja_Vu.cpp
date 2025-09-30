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
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        vector<ll>a(n),x(q);
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            a[i]=x;
        }
        // vector<ll>indices;
        for(int i=0;i<q;i++){
            ll p;cin>>p;
            x[i]=p;
        }
        // indices.push_back(x[0]);
        // ll idx=0;
        // for( int i=1;i<q;i++){
        //     if(x[i]!=indices[i-1]){
        //         indices.push_back(x[i]);
        //     }

        // }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<indices.size();j++){
        //         if(a[i]%(1<<indices[j])==0){
        //             a[i]+=1<<(indices[j]-1);
        //         }
        //     }
        // }

        set<int> used;
        for (int j = 0; j < x.size(); j++) {
            int e = x[j];
            if (used.count(e)) continue; // skip if already applied
            used.insert(e);
        
            int power = (1 << e);
            int numadd = (1 << (e - 1));
            for (int i = 0; i < n; i++) {
                if (a[i] % power == 0) {
                    a[i] += numadd;
                }
            }
        }
        for(auto it:a){
            cout<<it<<" ";
        }
        cout<<endl;


        
        

    }
}