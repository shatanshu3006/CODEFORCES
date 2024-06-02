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
                            
bool isPrime(ll n){
if (n <= 1)
return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (ll i = 5; i * i <= n; i = i + 6){
if (n % i == 0 || n % (i + 2) == 0)
return false;
}
return true;
}
                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!
ll func(ll j,ll n){
    ll res=((n>>(j+1))<<j);
//     This line calculates the number of complete blocks of size 2^j 
//   in n and multiplies that count by 2^j. Effectively, it zeros out the last j bits of n.

// bit check and addition
if(n&(1ll<<j)){  //n&(1ll<<j checks if the bit at position j in n is set (1)


// If this bit is set, the function then adds the value of the lower j bits of n plus one to res.
// n & ((1ll << j) - 1) masks the lower j bits of n.
// Adding one accounts for the inclusion of the bit at position j itself.
    res+=((n&((1ll<<j)-1))+1);
}

return res;
}
       #define mod 998244353             
void solve()
{
   long long n,m;
  cin >> n >> m;
  long long res=0;
  for(long long i=0;i<60;i++){
    if(m&(1ll<<i)){
      res+=func(i,n);
      res%=mod;
    }
  }
  cout << res << "\n";
}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}