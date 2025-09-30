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
        int s;cin>>s;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        int l=0,r=0;
        int sum=0;
        int maxLen=0;
        while(r<n){
            sum+=a[r];
            r++;
            while(sum > s && l < r){
                sum -= a[l];
                l++;
            }
            if(sum==s){
                maxLen=max(maxLen,r-l);
            }
        }
        if(maxLen==0){
            cout << -1 << endl;
        } else {
            cout << n-maxLen << endl;
        }
    }
}