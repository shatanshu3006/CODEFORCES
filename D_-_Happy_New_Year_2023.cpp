#include <iostream>
#include <math.h>
using namespace std;
                    
typedef long long ll;
void solve()
{
   ll n;cin>>n;
   // working rule: if we assuse p and q to be equal, then we can make a sieve till cube root of n and check all the prime numbers the either p or q must be there in the cube root of n.
   ll p=0;ll q=0;
   for(int i=2;i*i*i<=n;i++){ //assumed p and q to be equal and traverse.
       if(n%i!=0){
           continue;
       }
       if((n/i)%i==0){
           p=i;
           q=(n/i)/i;
       }
       else{
           q=i;
           p= sqrt(n/i);
       }
       break;
   }
   cout<<p<<" "<<q<<endl;
}
                    
signed main()
{
int t=1;
cin>>t;
while(t--)
{
   solve();
}
}