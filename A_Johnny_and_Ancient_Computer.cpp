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
    ll t;cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        if(a>b){
            swap(a,b);
        }

        
        if(b%a){
            cout<<-1<<endl;
        }
        
        else{
            int count=0;
            b/=a;
            while(b%8==0){
                b=b/8;
                count++;
            }

            while(b%4==0){
                b=b/4;
                count++;
            }
            while(b%2==0){
                b=b/2;
                count++;
            }
            if(b==1){
            cout<<count<<endl;
            }
            else{
                cout<<-1<<endl;
            }


        }

    }
}