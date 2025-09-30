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
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#include<iomanip>
typedef long long ll;
using namespace std;

const int M=1e5;
vector<int>factors[M+1];
int main(){
    int t;cin>>t;
    // precomputing all the factors 
    for( int i=1;i<=M;i++){
        for(int j=i;j<=M;j+=i){
            factors[j].push_back(i);
        }
    }
    while(t--){
        int n,m;cin>>n>>m;
        vector<int>smartness(n);
        for(int i=0;i<n;i++)cin>>smartness[i];
        sort(smartness.begin(),smartness.end());
        vector<int>freq(m+1);

        int topics_covered=0;
        int res=INT_MAX;

        for(int i=0,j=0;i<n;i++){
            // adding students towards right by moving j
            while(j<n && topics_covered<m){
                for(int x:factors[smartness[j]]){
                    if(x<=m){
                        freq[x]++;
                        if(freq[x]==1){
                            topics_covered++;
                        }
                    }
                }
                j++;
            }

            if(topics_covered==m){
                res=min(res,smartness[j-1]-smartness[i]);
            }

            //removing students from left by moving i
            for(int x:factors[smartness[i]]){
                if(x<=m){
                    freq[x]--;
                    if(freq[x]==0){     //topic is no longer covered
                        topics_covered--;
                    }
                }
            }
        }

        if(res==INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<res<<endl;
        }

        
    }
}