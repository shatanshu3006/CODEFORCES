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
   int n;cin>>n;
   vector<int>a(n);
   fori(i,0,n)cin>>a[i];
   vector<int>pref(n+1,0),suff(n+1,0);
   pref[1]=1;
   for(int i=2;i<n;i++){
       if(a[i-1]-a[i-2]>a[i]-a[i-1]){
           pref[i]=1+pref[i-1];
       }
       else{
           pref[i]=a[i]-a[i-1]+pref[i-1];
       }
   }
   suff[n-1]=1;
   for(int i=n-1;i>=2;i--){
       if(a[i]-a[i-1]>a[i-1]-a[i-2]){
           suff[i-1]=1+suff[i];     //suff[i]=0 is already 0 if 1 has to be added
       }
       else{
           suff[i-1]=(a[i-1]-a[i-2])+suff[i];
       }
   }
int m;cin>>m;
   while(m--){
       int x,y;
       cin>>x>>y;
       //if x<y that is going from left to right
       if(x<y){
       int ans=(pref[y-1]-pref[x-1]);
       cout<<ans<<endl;
       }
       else{
           //if x>y then we are goinf from right to left
           int ans=suff[y]-suff[x]; 
           //suff[y] will be greater as we move from x to y the cost keeps adding up
           cout<<ans<<endl;
       }
       
   }
   
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