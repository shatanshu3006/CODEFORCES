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

   const int MAXN=200005;
   int n;
   int a[MAXN];
   int prv[MAXN];
   int nxt[MAXN];
   bool in[MAXN];  

   bool good(int i){
       if(i<1 || i>n){
           return 0;
       }
       return a[prv[i]]==a[i]-1 || a[nxt[i]]== a[i]-1;
   }               
void solve()
{
   cin>>n;
   priority_queue<pair<int,int>>pq;
   for(int i=1;i<=n;i++){
       prv[i]=i-1;  //for previous element
       nxt[i]=i+1;  //for next element
       in[i]=0;     //visited array
       cin>>a[i];
   }
   a[n+1]=a[0]=-2;

   for(int i=1;i<=n;i++){
       if(good(i)==1){
           in[i]=1;
           pq.push({a[i],i});
       }
   }

   while(!pq.empty()){
       auto [_,i]=pq.top();
       pq.pop();

       nxt[prv[i]]=nxt[i];
       prv[nxt[i]]=prv[i];

       if(!in[prv[i]] && good(prv[i])){
           in[prv[i]]=1;
           pq.push({a[prv[i]],prv[i]});
       }
       if(!in[nxt[i]] && good(nxt[i])){
           in[nxt[i]]=1;
           pq.push({a[nxt[i]],nxt[i]});
       }
   }

   int mn=n, bad=0;
   for(int i=1;i<=n;i++){
       bad+=!in[i];
       mn=min(a[i],mn);
   }
   if(bad==1 && mn==0){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
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