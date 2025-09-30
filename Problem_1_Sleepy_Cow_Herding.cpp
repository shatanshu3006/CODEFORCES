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
#include <climits>
#include<iomanip>
typedef long long ll;
using namespace std;

int main(){
    
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());

        int minAns=0;

        if(v[n-2]-v[0]==n-2 && v[n-1]-v[n-2]>2){
            minAns=2;
        }
        else if(v[n-1]-v[1]==n-2 && v[1]-v[0]>2){
            minAns=2;
        }
        else{
            int p1=0;
            int p2=0;
            int maxRange=0;

            for(p1=0;p1<n;p1++){
                while(p2<n-1 && v[p2+1]<=n-1){
                    // keep moving until you find a range of size n (not indexes, cow locations)
                    p2++;
                }
                int rangeSize=p2-p1+1;      //number of cows within the range
                maxRange=max(maxRange,rangeSize);
            }
            minAns=n-maxRange;
        }
        cout<<minAns<<endl;
        cout<<max(v[n-2]-v[0],v[n-1]-v[1])-(n-2)<<endl;
    
}