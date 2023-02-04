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
const ll MAXM = 1e5;
vector<ll> factors[MAXM + 5];

void init()
{
    for (ll i = 1; i <= MAXM; i++)
    {
        for (ll j = i; j <= MAXM; j += i)
        {
            factors[j].pb(i);
        }
    }
}    
const ll inf = 1e17;
void solve()
{
   ll n,m;cin>>n>>m;
   vector<pair<int,int> >vp;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       vp.push_back({x,i});
   }
   sort(vp.begin(),vp.end());
   vector<ll>frequency(m+1,0); //taking a vector of sufficient size.
   ll count=0;ll j=0;
   ll global=INT_MAX;
   for(ll i=0;i<n;i++){
       for(auto it:factors[vp[i].first]){
            if(it>m){
                break;
            }
            if(!frequency[it]++){
                count++;
            }
       }
       while(count==m){
           ll current_ans=vp[i].first-vp[j].first;
           if(current_ans<global){
               global=current_ans;
           }
           for(auto x:factors[vp[j].first]){
               if(x>m){
                   break;
               }
               if(--frequency[x]==0){
                   current_ans--;
               }
           }
           j++;
       }
   }
   cout << (global >= inf ? -1 : global) << "\n";

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