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
        int n,x,a[1000000];
        cin>>n>>x;
        int ans=0;
        for( int i=0;i<3;i++){
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<n;i++){
                if((a[i]|x)!=x)break;
                ans|=a[i];
            }
        }
        if(ans==x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}