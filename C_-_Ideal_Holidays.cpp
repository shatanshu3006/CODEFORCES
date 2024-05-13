#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
   cin>>n>>a>>b;
   vector<int>d(n+1),temp;
   for(int i=1;i<=n;i++){
       cin>>d[i];
       d[i]%=(a+b);
       if(d[i]==0){
           d[i]=a+b;
       }
   }

   sort(d.begin(),d.end());

   int l1=d[1]-1;
   int r1=d[n]-a;

   if(d[n]<=a || r1<=l1){
       cout<<"Yes";
       return 0;
   
   }
   for(int i=1;i<=n;i++){
       if(d[i-1]<=a && (a+b+1-d[i]<=a-d[i-1])){
           cout<<"Yes";
          return 0;
       }
   }
   cout<<"No"<<endl;
   return 0;

}