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
            
bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}                   
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n==2){
        cout<<"NO"<<endl;
       
    }
    else if(n==3){
        cout<<"YES"<<endl;
       
    }
    else if(check_prime(n)==true){
        cout<<"YES"<<endl;
    }
    else if(check_prime(n)==false){
        cout<<"NO"<<endl;
    }
    else if(n%2==0){
        cout<<"NO"<<endl;
    }
    

}
return 0;
}