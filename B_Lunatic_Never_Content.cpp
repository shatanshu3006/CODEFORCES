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
int gcd(int a ,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

bool isPalindrome(vector<int>&a){
    int len=a.size();
    int l=0;int r=len-1;
    while(l<=r){
        if(a[l]!=a[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // if(isPalindrome(a)){
        //     cout<<0<<endl;
        // }
        
            int res=0;
            for(int i=0;i<n;i++){
                res=gcd(res,abs(a[i]-a[n-i-1]));
            }
            cout<<res<<endl;
        
    }
}