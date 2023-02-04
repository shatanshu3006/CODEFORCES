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
   int arr[n];
    vector<int> v1;
    vector<int> v2;
    int cnt=0;
    int cnt1=0;
    int sum1=0;
    int sum2=0;
   fori(i,0,n){
       cin>>arr[i];
       if(arr[i]%2!=0 && cnt<3){
           v1.push_back(i+1);
           sum1+=arr[i];
       }
   }
   int f=0;
   if(sum1%2!=0){
       cout<<"YES"<<endl;
       cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
       return;
   }
   else{
   fori(i,0,n){
       cin>>arr[i];
       if(arr[i]%2==0 && cnt<2){
           v2.push_back(i+1);
           sum2+=arr[i];
           cnt++;
       }
       if(arr[i]%2!=0 && f==0){
           v2.push_back(i+1);
           sum2+=arr[i];
           f++;
       }
   }
   if(sum2%2!=0){
       cout<<"YES"<<endl;
       cout<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<endl;
       return;
   }
   else{
       cout<<"NO"<<endl;
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