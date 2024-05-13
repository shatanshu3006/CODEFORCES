#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   vector<int>a;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       if(x%k==0){
           cout<<x/k<<" ";
       }
   }
   
   
}