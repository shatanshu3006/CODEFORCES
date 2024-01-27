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
   ll n,k,m;
   cin>>n>>k>>m;
   string str;
   cin>>str;
   string s="";
   char ch='a';
   while(k--){
       s+=ch;
       ch++;
   }
   string ans="";
   while(n--){
   ans+=s;
   }
   //ans-> abcabcabc
   map<char,int>mp;
   for(int i=0;i<s.length();i++){
       mp[s[i]]++;
   }
   map<char,int>mp1;
   for(int i=0;i<m;i++){
       mp1[str[i]]++;
   }
   vector<pair<char,int>>v1,v2;
   for(auto it:mp){
       v1.push_back({it.first,it.second});
   }
   for(auto it:mp1){
       v2.push_back({it.first,it.second});
   }
   string res="";
   char ch;
   ll len;
   for(int i=0;i<v1.size();i++){
       if(v2[i].second>=v1[i].second){
           continue;
       }
       else{
           ll diff=abs(v2[i].second-v1[i].second);
           ch=v2[i].first;
           len=v2[i].second+diff;
       }

   }
   while(len>0){
       res+=ch;
   }
   if(res.length()==0){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
       cout<<res<<endl;
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