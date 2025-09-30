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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero++;
            }
        }
        int one=0;
        for(int i=0;i<n/2;i++){
            if((s[i]=='1'||s[n-1-i]=='1')&&s[i]!=s[n-1-i]){
                one++;
            }
        }

        string revs=s;
        reverse(revs.begin(),revs.end());

        if(revs==s){
            if(zero==1||zero%2==0){
                cout<<"BOB"<<endl;
            }
            else{
                cout<<"ALICE"<<endl;
            }
        }

        else{
            if(zero==2&&one==1){
                cout<<"DRAW"<<endl;
            }
            else{
                cout<<"ALICE"<<endl;
            }
        }
        
    }
    }
