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
    int funcr(int x,vi &a){
        int n=a.size();
        if(x<a[0]){
            return 1;
        }
        else if(x>a[n-1]){
            return n+1;
        }
        int l = 0, r = n-1, mid; //-1 is negative inf and n is + inf
        while(l+1<r){
        mid = (l+r)/2;
        if(a[mid] >= x){r = mid;}
        else{
            l=mid+1;
        }
        }
        if(a[l] >= x){return l+1;}
    else{return r+1;}
    }
   int funcl(int x,vi&a){
    int n=a.size();
    if(x<a[0]){
        return 0;    
    }
    else if(x>a[n-1]){
        return n;       
    }
    int l=0,r=n-1,mid;        // -1 is negative inf and n is positive inf
    while(l+1<r){
        mid=(l+r)/2;

        if(a[mid]>x){
            r=mid-1;
        }
        else{
            l=mid;
        }
    }
    if(a[r] <= x){return r+1;}
    else{return l+1;}
    }     
void solve()
{
   int n;cin>>n;
   vi a(n);fori(i,0,n)cin>>a[i];
   sort(a.begin(),a.end());
   int k;cin>>k;
   while(k--){
       int l,r;
       cin>>l>>r;

    //    int first=lower_bound(a.begin(),a.end(),l)-a.begin();
    //    int last=upper_bound(a.begin(),a.end(),r)-a.begin();

       cout<<funcl(r,a)-funcr(l,a)+1<<" ";
       
   }
}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}