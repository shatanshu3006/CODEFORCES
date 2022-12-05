#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,k;
  cin>>a>>b>>k;
  int count=0;
  if(a==b){
    cout<<"0"<<endl;
    }
  for(int i=0;i<a*k;i++){
  if(a*k<b){
  count=count+1;
  }
  }
  cout<<count<<endl;
  return 0;
}