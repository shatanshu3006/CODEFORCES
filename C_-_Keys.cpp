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
                    
void solve()
{
   int n,m,k;cin>>n>>m>>k;
   vector<int>ks(m,0),r(m,0);
   for(int i=0;i<m;i++){
       int c;cin>>c;
       for(int j=0;j<c;j++){
           int a;cin>>a;
           a--;
           ks[i]=ks[i]|(1<<a);
       }
       string s;cin>>s;
       if(s=="o"){
           r[i]=1;
       }
       else{
           r[i]=0;
       }
   }

   int res=0;
   for(int i=0;i<(1<<n);i++){
       bool judge=true;
       for(int j=0;j<m;j++){
           int ok=__builtin_popcount(i&ks[j]);

           if(ok>=k && r[j]==0){
               judge=false;
               break;
           }
           if(ok<k && r[j]==1){
               judge=false;
               break;
           }
       }
       if(judge==true)res++;
   }
   cout<<res<<endl;
   return;
}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}