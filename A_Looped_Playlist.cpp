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
#define fori(i,a,n) for(ll i=a;i<n;i++)
#define forj(j,b,n) for(ll j=b;j<n;j++)
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
   ll n,p;
   cin>>n>>p;
   vl a(n);
   ll sum=0;
   fori(i,0,n){
       cin>>a[i];
       sum+=a[i];
   }
   int numsong=0;
   if(p>=sum){
        numsong+=(p/sum)*n;
        p=p%sum;
   }
//    while(r<n){
//        sum2+=a[r];
//        while(sum2>p){
//            sum2-=a[l];
//            l++;
//            ans=min(ans,r-l+1);
//         } 
//         r++;
//         r=r%n;
//     }
int mini=n;
int index;
for(int i=0;i<n;i++){
    ll j=i, sum2=0;int temp=0;
    while(sum2<p){
        sum2+=a[j];
        temp++;
        j=(j+1)%n;
    }
    if(temp<mini){
        mini=temp;
        index=i+1;
    }
    
}

cout<<index<<" "<<numsong+mini<<endl;
   
}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}