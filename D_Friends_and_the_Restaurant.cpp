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
        int n;
        cin>>n;
        vector<int> x(n);
        vector<int> y(n);

        for(int i=0;i<n;i++){
            cin>>x[i];
        }

        for(int i=0;i<n;i++){
            cin>>y[i];
        }

        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(y[i]-x[i]);
        }

        sort(arr.begin(),arr.end());
        int l=0,r=n-1;
        int groups=0;
        while(l<r){
            if(arr[l]+arr[r]>=0){
                groups++;
                r--;
            }

            l++;
            
        }

        cout<<groups<<endl;
    }
}