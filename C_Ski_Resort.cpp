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
    int t;
    cin>>t;
    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        ll ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=q){
                count++;
            }
            else{
                count=0;
            }
            ans+=fmax(0,count-k+1);
        }

        cout<<ans<<endl;
    }
}