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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.length();
    int qm=0;
    int sum1=0;int sum2=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='+'){
            sum1+=1;
        }
        else{
            sum1+=(-1);
        }
        if(s2[i]!='+' && s2[i]!='-'){
            qm++;
        }
        else if(s2[i]=='+'){
            sum2+=1;
        }
        else{
            sum2+=-1;
        }
    }
    if(sum1==sum2 && qm==0){
        cout<<1<<endl;
    }
    else if(sum1!=sum2 && qm==0){
        cout<<0<<endl;
    }
    else{
        int num=0;
    for(int i=0;i<(1<<qm);i++){
        int temp=sum1;
        for(int j=0;j<qm;j++){
            if(i&(1<<j)){
                temp++;
            }
            else{
                temp--;
            }
        }
        if(temp==sum2){
            num++;
        }
    }
    double ans=(num*(1.0))/(1<<qm);
    cout<<setprecision(20)<<ans<<endl;
    }
    
    
   

   
}
                    
signed main()
{
int t=1;
//cin>>t;
while(t--)
{
   solve();
}
}