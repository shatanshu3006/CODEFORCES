#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<long long> vi;
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
bool check(long long mid, vector<long long>&arr, long long sum, long long k){
    if(sum-mid<=k) return true;
    for(long long i=arr.size()-1;i>=(max((long long)1,(long long)arr.size()-mid));i--){
        sum-=arr[i];
        long long movesrem = mid-(arr.size()-i);
        long long temp = sum-arr[0]+(arr.size()-i+1)*(arr[0]-movesrem);
        if(temp<=k) return true;
    }
 
    return false;
}
 
void solve(){
    long long n,k;
    cin>>n>>k;
    vi arr(n);
    long long sum = 0;
 
    for(long long i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    long long l=0;
    long long h=sum-k;
    if(sum-k<=0){
        cout<<0<<endl;
        return;
    }
    else{
    long long ans = -1;
    while(l<=h){
        long long mid = l + (h-l)/2;
        if(check(mid,arr,sum,k)){
            ans=mid;
            h = mid-1;
        }
        else l=mid+1;
    }
 
    cout<<ans<<endl;
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