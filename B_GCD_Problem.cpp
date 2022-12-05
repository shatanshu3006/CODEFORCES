#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       {
        int n;
        cin>>n;
        if(n % 2 == 0)
        {
            int b = n/2;
            int a = b-1;
            int c = 1;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            int mid = n/2;
            int a = mid-1;
            int b = mid+1;
                while( a % 2 == 0 and b % 2 == 0)
                {
                    a -= 1;
                    b += 1;
                }
            int c = 1;
            cout<<a<<" "<<b<<" "<<c<<endl;

        }
    }

    }
    return 0;
}