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

// int main(){
//     int t;cin>>t;
//     while(t--){
//         // int n;cin>>n;
//         // vector<int>pref(n,0),suff(n,0);
//         // map<int,int> mp;
//         // for(int i=0;i<n;i++){
//         //     cin>>pref[i];
//         //     suff[i]=pref[i];
//         //     if(i>0){
//         //         pref[i]+=pref[i-1];
//         //     }
//         //     mp[pref[i]]=i+1;
//         //     // cout<<pref[i]<<" ";
//         // }
//         // map<int,int> mpp;
//         // // cout<<endl;
//         // // cout<<suff[n-1]<<" ";
//         // for(int i=n-2;i>=0;i--){
//         //     suff[i]+=suff[i+1];
//         //     // cout<<suff[i]<<" ";
//         // }
//         // sort(suff.begin(),suff.end());
//         // for(int i=0;i<n;i++){
//         //     mpp[suff[i]]=i+1;
//         // }
//         // int ans=0;
        
//         // for(int i=0;i<n;i++){
//         //     if(mp[pref[i]] && mpp[pref[i]]){
//         //     int l=mp[pref[i]];
//         //     int r=mpp[pref[i]];
//         //     if(l+r<=n){
//         //         ans=max(ans,l+r);
//         //     }
//         // }
            
//         // }
//         // cout<<ans<<endl;
//         // // cout<<endl;

//         int n;cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++)cin>>a[i];
//         int l=0,r=n-1;
//         ll sumL=0,sumR=0;
//         int ans=0;

//         while(l<=r){
//             if(sumL<sumR){
//                 sumL+=a[l];
//                 l++;
//             }
//             else if(sumR<sumL){
//                 sumR+=a[r];
//                 r--;
//             }
//             else{
//                 ans=max(ans,l+(n-r-1));
//                 sumL+=a[l];
//                 l++;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n - 1;
        long long sumL = a[0], sumR = a[n - 1];
        int ans = 0;

        while (l < r) {
            if (sumL == sumR) {
                ans = max(ans, (l + 1) + (n - r));
            }
            if (sumL < sumR) {
                l++;
                sumL += a[l];
            } else {
                r--;
                sumR += a[r];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}