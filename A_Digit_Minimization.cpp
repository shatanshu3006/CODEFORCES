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
int count_digit(int number) {
   return int(log10(number) + 1);            
}
                    
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dig=count_digit(n);
        if(dig==2){
            cout<<n%10<<endl;
        }
        else{
            int mini=INT_MAX;
            while(n>0){
                mini=min(mini,(n%10));
                n=n/10;
            }
            cout<<mini<<endl;
        }
       
    }
return 0;
}