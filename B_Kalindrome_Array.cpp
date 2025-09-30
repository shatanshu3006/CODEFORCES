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

bool solve(vector<int> &arr,int x){
    vector<int> temp;
    for(auto i:arr){
        if(i!=x){
        temp.push_back(i);
        }
    }

    int l=0,r=temp.size()-1;
    while(l<r){
        if(temp[l]!=temp[r]){
            return false;
        }
        l++;
        r--;
    }

    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0,r=n-1;
        while(l<r&&arr[l]==arr[r]){
            
            l++;
            r--;
        }
        if(l>=r){
            cout<<"YES"<<endl;
            
        }
        else{
        if(solve(arr,arr[l])||solve(arr,arr[r])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
}