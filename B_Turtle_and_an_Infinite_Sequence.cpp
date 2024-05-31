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
{   int n,m;cin>>n>>m;
//left is the smallest index that can influence the value of an after m seconds
//right is the largest index that can influence the value of an after m seconds.
    int left=max(0,n-m);
    int right=n+m;

    //s is the number of bit shifts needed that effectively finds the highest postion where left and right differ
    int s=0;

    //the loop shift both left and right and counts steps until they are the same or right becomes zero 
    while((left!=right)&&right){
        right=right>>1;
        left=left>>1;
        s++;
    }
    // now create a mask s with lsb as 1
    // ((n+m)|((1<<s)-1)) -> uses bitwise OR to ensure that all the bits in the positions determined by s are set to 1, producing the final result.
    cout<<((n+m)|((1<<s)-1))<<endl;

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