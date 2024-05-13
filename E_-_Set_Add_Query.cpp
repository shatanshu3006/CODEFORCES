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

vector<long long>solution(int size,vector<int>&queries){
    vector<long long>answer(size,0);
    unordered_set<int>s;
    unordered_map<int,long long>startSums;
    long long sum=0;

    for(auto query:queries){
        int target=query-1;

        if(s.count(target)==0){
            startSums[target]=sum;
            s.insert(target);
        }
        else{
            s.erase(target);
            answer[target]+=sum-startSums[target];
            startSums.erase(target);
        }
        sum+=s.size();
    }
    for (auto target : s) {
    answer[target] += sum - startSums[target];
  }
  return answer;
}                 
void solve()
{
   int n,q;
   cin>>n>>q;
   vector<int>x(q);
   for(int i=0;i<q;i++){
       cin>>x[i];
   }
   vector<long long>ans=solution(n,x);

   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
   cout<<endl;
}
                    
signed main()
{
solve();
}