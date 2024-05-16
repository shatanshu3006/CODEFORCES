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

bool func(vector<ll>&a,ll mid,ll n,ll k){
    ll sum=0;
    ll cnt=1;
    //finding the number of subarrays such that eah subarray has sum <=mid
    for(ll i=0;i<n;i++){
        sum+=a[i];
        if(sum>mid){
            cnt++;
            sum=a[i];
        } 
    }

    //if the number of subarrays is less than or equal to k
    // then it is possible to divide arr into k subarrays with sum <=mid
    return cnt<=k;
}
void solve()
{
   ll n,k;
   cin>>n>>k;
   vector<ll>a(n);
   fori(i,0,n)cin>>a[i];

   // lower limit -> 7 , upper limit ->sum of array->21
   // search space -> [7,21]
   // mid->14
   // upper lim ->13

   //search space -> [7,13]
   //mid->10
   //upper lim -> 9
   
   //search space-> [7,9]
   // mid->8
   //low=mid

   ll start=*max_element(a.begin(),a.end());
   ll end= accumulate(a.begin(),a.end(),0LL);
   ll ans=0;

// binary search to minimize the maximum sum
   while(start<=end){
       ll mid=(start + (end-start)/2);
       //if it is possible to divide array into k subarrays such that each subarrya sum <=mid
       if(func(a,mid,n,k)==true){
           ans=mid;
           end=mid-1;
       }
       //if it is not possible to divide into k
       // go towards the larger value
       else{
           start=mid+1;
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