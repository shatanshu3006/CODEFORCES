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
   ll n;cin>>n;
   const ll MX=2000000+5;
   vector<ll> lessCnt(MX);
   while(n--){
       ll c;cin>>c;
       lessCnt[c]++;
   }

// to find all the elements greter than x,2x,3x,and so on 
for(ll i=1;i<MX;i++){
    lessCnt[i]+=lessCnt[i-1];
}
   // for finding all the elements between [l,r] lessCnt[r]-lessCnt[l-1]

   ll ans=0;

   // alerady we knoe that aj/ai =k so if we iterate through all ai and k we can directly fix aj
   //so we create 2 nestedloops 

   for(ll ai=1;ai<MX;ai++){     //for ai
       // for finding all the elements between [l,r] lessCnt[r]-lessCnt[l-1]
       const ll f=lessCnt[ai]-lessCnt[ai-1];

       if(f==0)continue;

       ans+=f*(f-1)/2; // add all the fC2 combinations to ans

        for(ll k=1; k<MX/ai;k++){       //for each aj/ai=k
            ll elementCount=lessCnt[(k+1)*ai-1]-lessCnt[k*ai-1];

            //exclude ai 
            if(k==1){
                elementCount-=f;
            }
            ans+=elementCount*f*k;
        } 
   }

   cout<<ans<<endl;


}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}