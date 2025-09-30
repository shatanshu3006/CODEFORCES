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
    vector<int>arr(n+1);
    map<int,int>mp;
    map<int,int>freq;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        arr[i]=x;
        mp[x]=i;
        freq[x]++;
    }
bool flag=true;
    for(int i=1;i<=n;i++){
        int val=arr[i];
        int other=k-val;
        freq[val]--;
        if(freq[val]==0){
            freq.erase(val);
        }
        if(freq.find(other)!=freq.end()){
            cout<<i<<" "<<mp[other];
            flag=false;
            break;
        }
    }
    if(flag==true){
    cout<<"IMPOSSIBLE"<<endl;
    }
    
}