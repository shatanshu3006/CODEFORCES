#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                    
typedef long long ll;
typedef vector<int> vi;
typedef vector<long> vl;
typedef pair<long,long> vll;
typedef pair<int,int> pi;
#define pb(x) push_back(x)
#define mp make_pair
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fori(i,a,n) for(int i=a;i<n;i++)
#define forj(j,b,n) for(int j=b;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pi (3.141592653589)
#define MOD 1000000007
                    
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
//AIM -> WORK -> ACHIEVE -> REPEAT Carpe Diem!!
                    
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n<=9){
        cout<<n<<endl;
    }
    else if(n>=10 && n<18){
        cout<<n-9<<9<<endl;
    }
    else if(n>=18 && n<=24){
        cout<<n-17<<89<<endl;
    }
    else if(n>24 && n<=30){
        cout<<n-24<<789<<endl;
    }
    else if(n>30 && n<=35){
        cout<<n-30<<6789<<endl;
    }
    else if(n>35 && n<=39){
        cout<<n-35<<56789<<endl;
    }
    else if(n>39 && n<=42){
        cout<<n-39<<456789<<endl;
    }
    else if(n>42 && n<=44){
        cout<<n-42<<3456789<<endl;
    }
    else if(n==45){
        cout<<123456789<<endl;
    }
    else{cout<<-1<<endl;}
    
}
return 0;
}