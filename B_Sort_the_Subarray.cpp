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
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        int l=0;
        int r=n-1;
        while(l<n&&a[l]==b[l]){
            l++;
        }
        while(r>=0&&a[r]==b[r]){
            r--;
        }

        for(int i=l-1;i>=0;i--){
            if(b[i]<=b[i+1]){
                l--;
            }
            else{
                break;
            }
        }

        for(int i=r+1;i<n;i++){
            if(b[i]>=b[i-1]){
                r++;
            }
            else{
                break;
            }
        }

        cout<<l+1<<" "<<r+1<<endl;
 
    }
}