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
bool checkrow(vector<vi>&a,vector<vi>&b){
    int n=a.size(),m=a[0].size();
    vector<vi>rowsA,rowsB;

    for(int i=0;i<n;i++){
        vi ra,rb;
        for(int j=0;j<m;j++){
            ra.push_back(a[i][j]);
            rb.push_back(b[i][j]);
        }
        sort(ra.begin(),ra.end());
        sort(rb.begin(),rb.end());


        rowsA.push_back(ra);
        rowsB.push_back(rb);
    }

    sort(rowsA.begin(),rowsA.end());
    sort(rowsB.begin(),rowsB.end());

    return rowsA==rowsB;
} 

bool checkcol(vector<vi>&a,vector<vi>&b){
    int n=a.size(),m=a[0].size();
    vector<vi>colsA,colsB;

    for(int j=0;j<m;j++){
        vi ca,cb;
        for(int i=0;i<n;i++){
            ca.push_back(a[i][j]);
            cb.push_back(b[i][j]);
        }
        sort(ca.begin(),ca.end());
        sort(cb.begin(),cb.end());

        colsA.push_back(ca);
        colsB.push_back(cb);
    }

    sort(colsA.begin(),colsA.end());
    sort(colsB.begin(),colsB.end());

    return colsA==colsB;
} 
void solve()
{
   int n,m;
   cin>>n>>m;
   vector<vi>a(n,vi(m)),b(n,vi(m));
   fori(i,0,n){
       forj(j,0,m){
           cin>>a[i][j];
       }
   }
   fori(i,0,n){
       forj(j,0,m){
           cin>>b[i][j];
       }
   }

   if(checkrow(a,b) && checkcol(a,b)){
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