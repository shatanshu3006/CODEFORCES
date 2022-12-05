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
    int n,z;
    cin>>n>>z;priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pq.push(x);
    }
    int ans=0;
    bool check=false;
    while(pq.top()>0){
        int x=pq.top();
        z=z-x;
        ans++;
        if(z<=0){
            check=true;
            break;
        }
        pq.pop();
        pq.push(x/2);
    }
    if(check==true){
        cout<<ans<<endl;
    }
    else{
        cout<<"Evacuate"<<endl;
    }
}
return 0;
}