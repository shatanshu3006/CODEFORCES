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
   int a[200020],b[200020];
   bool flag=false;
   //taking the inputs and filling -1 and non -1 corresponding values to b
   
   for(int i=1;i<=n;i++){
      cin>>a[i];
      if(a[i]!=-1){
         b[i]=a[i];
         flag=true;
      }
      else{
         b[i]=b[i-1]/2;
      }

      if(flag==true && b[i]==0){
         b[i]=2;
      }
   }

   // if the segment between l to r is -1 then we handle it separately
   b[n+1]=b[0];
   for(int i=n;i>=1;i--){
      if(a[i]==-1){
         b[i]=max(b[i],b[i+1]/2);
      }
      if(b[i]==0){
         b[i]=2;
      }
   }

   //check if the array we made is good or not else return -1
   for(int i=1;i<n;i++){
       if (b[i] != b[i + 1] / 2 && b[i] / 2 != b[i + 1]) {
            cout << "-1" << endl;
            return;
        }
   }
//print the final array b
for(int i=1;i<=n;i++){
   cout<<b[i]<<" ";
}
cout<<endl;


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