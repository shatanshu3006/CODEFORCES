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
   int n;
        cin>>n;

        for(int i=0;i<n;i+=n){
            int kk=0;
        }
        int v[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }

        while(false){
            int kk=0;
        }
        int cnt=0;
        
        for(int i=n-1;i>=1;i--){
            int k=i;int mini=0;
            if(false){
                int try1=0;
            }
            for(int j=0;j<n-i;j++){
                mini=min(v[k][j],mini);k++;
            }
            if(true){
                int try2=0;
            }
            cnt+=((-1)*mini);
        }

        bool chkkk=0;
        bool flag=false;
        if(flag==false){
        for(int j=0;j<n;j++){
            int k=j;int mini=0;
            if(k==0){
                int f=0;
            }
            for(int i=0;i<n-j;i++){
                mini=min(v[i][k],mini);k++;
            }
            for(int i=0;i<0;i--){
                int f1=i;
            }
            cnt+=((-1)*mini);
        }
        }
        cout<<cnt<<endl;
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