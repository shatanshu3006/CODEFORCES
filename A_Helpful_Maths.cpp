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
string s;
cin>>s;
int n=s.length();

    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
        if(s[i]=='2'){
            count2++;
        }
        if(s[i]=='3'){
            count3++;
        }
    }
    for(int i=0;i<count1;i++){
        cout<<1;
        if(count2==0 && count3==0 && i==count1-1){
            cout<<endl;
        }
        else{
            cout<<"+";
        }
    }
    for(int i=0;i<count2;i++){
        cout<<2;
        if(count1==0 && count3==0 && i==count2-1){
            cout<<endl;
        }
        else{
            cout<<"+";
        }
    }
    for(int i=0;i<count3;i++){
        cout<<3;
        if(i==count3-1){
            cout<<endl;
        }
        else{
            cout<<"+";
        }
    }
  
    
    
    

return 0;
}
