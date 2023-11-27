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

      ll solver(ll d,vector<ll>x){
          ll ans=0;
          for(ll i=1;i<x.size();i++){
              ans+=(x[i]-x[i-1]-1)/d;
          }
          ans+=ll(x.size())-2;
          return ans;
      }              
void solve()
{
   ll n,m,d;
   cin>>n>>m>>d;
   vector<ll>v(m);
   for(int i=0;i<m;i++){
       cin>>v[i];
   }
   // we assume that we are adding two vendors additionally
   v.push_back(1-d);
   v.push_back(n+1);

   sort(v.begin(),v.end());
   ll ans=2e9;
   vector<int>res;
   for(int i=1;i<=m;i++){
       ll A=v[i]-v[i-1]-1;
       ll B=v[i+1]-v[i]-1;
       ll C=v[i+1]-v[i-1]-1;
       ll D=C/d - (A/d + B/d);
       if(D<ans){
           ans=D;
           res.clear();
       }
       if(D==ans){
           res.push_back(v[i]);
       }
   }
   ll p=solver(d,v);
   cout<<ans+p-1<<" "<<res.size()<<endl;
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