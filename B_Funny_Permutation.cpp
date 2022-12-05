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
    if(n==3){
        cout<<-1<<endl;
       
    }
    else if(n==2){
        cout<<2<<" "<<1<<endl;
       
    }
    else if(n==4){
        cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
    }
    else{
        cout<<n-2<<" "<<n-1<<" "<<n<<" ";
        for(int i=1;i<=n-3;i++){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
}
return 0;
}