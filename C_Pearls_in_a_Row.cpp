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

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}          
void solve()
{
   // a-> {1,3,5,12} -> {{1,3},{5,12}}
   // b-> {6,7,8,9,10,11} -> {{6,7},{8,9},{10,11}}
   // first sort
   // vp -> {{1,3},{5,12},{6,7},{8,9},{10,11}}
   //second sort
   // vp-> {{1,3},{6,7},{8,9},{10,11},{5,12}}

   // {{1,3},{2,4}}
//       a     b

    int n;cin>>n;
    vector<int>a(n);
    map<int,vector<int> >mp;
    fori(i,0,n){
        cin>>a[i];
        mp[a[i]].push_back(i+1);
    }
    if(mp.size()==n){
        cout<<-1<<endl;
        return;
    }
    vector<pair<int,int> >vp;
    for(auto it:mp){
        for(int i=0;i<it.second.size()-1;i++){
            vp.push_back({it.second[i],it.second[i+1]});
        }
    }
    int ans=0;
    vector<pair<int,int>>ansvp;
    sort(vp.begin(),vp.end(),cmp);
    for(int i=0;i<vp.size()-1;i++){
        if(vp[i].second<vp[i+1].first){
            ans++;
            ansvp.push_back(vp[i]);
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<ansvp[i].first<<" "<<ansvp[i].second<<endl;
    }
    

}
                    
signed main()
{
int t=1;

while(t--)
{
   solve();
}
}