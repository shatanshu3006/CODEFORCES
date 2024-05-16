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
   string s,t,p;
   cin>>s>>t>>p;
   vector<int>bal(26);
   for(int i=0;i<s.length();i++){
       bal[s[i]-'a']++;
   }
   for(int i=0;i<p.length();i++){
       bal[p[i]-'a']++;
   }
   for(int i=0;i<t.length();i++){
       bal[t[i]-'a']--;
   }

   for(int j=0;j<26;j++){
       if(bal[j]<0){
           cout<<"NO"<<endl;
           return;
       }
   }

   //checking for s is a subsequence of t or not
   int ind=0;
   for(int i=0;i<t.length();i++){
       if(s[ind]==t[i]){
           ind++;
       }
   }
   //if we reach the end of the string s
    if(ind==s.length()){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
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