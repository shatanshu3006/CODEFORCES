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
    ll n,k;cin>>n>>k;
    vector<int>arr;
    for( int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    int l=0,r=0;
    int cnt=0;
    int sum=0;
    while(r<n){
        
        sum+=arr[r];
        if(sum==k)cnt++;
        
       while(sum>k && l<r){
        sum-=arr[l];
        l++;
        if(sum==k) cnt++;
       }
        r++;
        
    }
    cout<<cnt;
}