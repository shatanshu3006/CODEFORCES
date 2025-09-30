#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), x.rend()
typedef pair<long,long> vll;
typedef pair<int,int> pi;
                               
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Sieve of Eratosthenes:
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                               
#define pb(x) push_back(x)
#define mp make_pair
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fori(i,a,n) for(int i=a;i<n;i++)
#define forj(j,b,n) for(int j=b;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi (3.141592653589)
#define MOD 1000000007
                      
ll factorial(ll n){
ll ans=1;
for(int i=1; i<=n; i++)
ans = (ans*i) % MOD;
return ans;
}
                            

                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!
       
const int LIMIT = 1e6;  // adjust as needed
vector<bool> isPrime(LIMIT + 1, true);      //assuming all are primes and then running sieve
vector<ll>primes;
void pre(){
    isPrime[0]=isPrime[1]=false;
    for(ll i=2;i*i<=INT_MAX;i++){
        if(isPrime[i]==true){
            for(ll j=i*i;j<=INT_MAX;j++){
                isPrime[j]=false;
            }
        }
    }
    
    for(int i=0;i<isPrime.size();i++){
        if(isPrime[i]){
            primes.pb(i);
        }
    }
}

void solve()
{
    pre();
   ll a,b;
   cin>>a>>b;
   ll ans=1;
   ll gcd=__gcd(a,b);
   if(gcd==1){
       cout<<1<<endl;
       return;
   }
   
   for(ll i=0;i<primes.size() && 1ll*primes[i]*primes[i]<=gcd;i++){
       ll power=0;
       while(gcd%power==0){
           power++;
           gcd/=power;
       }
       ans*=(power+1);
   }
   if (gcd > 1) {
    // g has one prime factor left with exponent 1
    ans *= (1 + 1);  // Multiply by (exponent + 1)
    
    cout<<ans<<endl;return;
    }
}

signed main()
{
ll t=1;
cin>>t;
while(t--)
{
   solve();
}
}