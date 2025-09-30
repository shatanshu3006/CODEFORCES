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
#include<random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<iomanip>
typedef long long ll;
using namespace std;

int main(){
    
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v(n);
        for( int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll cnt=0;

        for(int i=1;i<n;i++){
            int diff=v[i]-v[i-1];
            if(diff>x){
                if(diff/(k+1)>=x){
                    cnt++;
                    k=0;
                }
                else{
                    k--;
                }
            }
        }
        cout<<cnt+1<<endl;
    
}