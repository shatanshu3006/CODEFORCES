#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int i=1, n, x, sum=0;

        cin>>n;
        if(n==0) cout<<"0";
        else{
            for(;sum<=n;++i){
                sum = sum + i;
            }
            i=i-2;
            cout<<i<<endl;
        }

    }

    return 0;
}