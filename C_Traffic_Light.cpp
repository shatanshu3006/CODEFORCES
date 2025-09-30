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
    char col;cin>>col;
    string s;cin>>s;
 
    // string signal=s+s;
    // int idx=-1;
    // for(int i=n-1;i>=0;i--){
    //     if(signal[i]==col){
    //         idx=i;
    //         break;
    //     }
    // }
    // int cnt=0;
    // for(int i=idx;i<signal.size();i++){
    //     if(signal[i]=='g'){
    //         break;
    //     }
    //     cnt++;
    // }
    // cout<<cnt<<endl;
        // if(col=='g'){
        //     cout<<0<<endl;
        //     continue;
        // }
    int nextgreen=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            nextgreen=n+i;
            break;
        }
    }
    int maxtime=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='g'){
            nextgreen=i;
        }
        else if(s[i]==col){
            maxtime=max(maxtime,nextgreen-i);
        }
    }

    cout<<maxtime<<endl;
}
    return 0;

}