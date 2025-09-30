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
    int n,k;
    cin>>n>>k;
    vector<ll>arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    map<ll,int>mp;
    mp[0]=1;     //number of subarrays starting from index 0 is 1
    ll sum=0;
    ll cnt=0;

    int r=0;
    while(r<n){
        sum+=arr[r];

        //if sum-k has occured before that means that there is a prefix sum
        // that when removed leaves a subarray that sums to the target k
        if(mp.find(sum-k)!=mp.end()){
            cnt+=mp[sum-k];
        }
        mp[sum]++;
        r++;
    }
    cout<<cnt<<endl;
    
}