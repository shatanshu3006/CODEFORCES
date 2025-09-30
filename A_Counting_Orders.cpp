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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int prev = -1;
        long long ans=1;
        // for(int i = 0; i < n; i++){
        //     int index = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        //     index --;
        //     ans *= (index - prev);
        //     ans %= mod;
        //     prev ++;
        // }
        // cout << ans << endl;
        // int ans=1;
        
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ans=0;
            }
        }

        // if(ans=
        for(int i=0;i<n;i++){
            int val=a[i];
            int low=0,high=n-1;
            int pos=-1;
            while(low<=high){
                int mid=low+(high-low)/2;

                if(val>b[mid]){
                    low=mid+1;
                    pos=mid;
                }
                else{
                    high=mid-1;
                }
            }
            // if(pos < i)
            // {
            //     ans = 0;
            //     break;
            // }
            ans=ans*(pos-i+1);
            ans %= mod;
        }


        cout<<ans<<endl;
        


    }
    return 0;
}