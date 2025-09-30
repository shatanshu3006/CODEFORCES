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

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int l=0;
        int r=n-1;
        int mini=1;
        int maxi=n;
        while(l<r){
            if(arr[l]==mini){
                l++;
                mini++;
            }
            else if(arr[r]==mini){
                r--;
                mini++;
            }
            else if(arr[l]==maxi){
                l++;
                maxi--;
            }
            else if(arr[r]==maxi){
                r--;
                maxi--;
            }

            else{
                break;
            }
        }


        if(l<r){
            cout<<l+1<<" "<<r+1<<endl;  
        }
        else{
            cout<<-1<<endl;
        }
    }



    return 0;
}