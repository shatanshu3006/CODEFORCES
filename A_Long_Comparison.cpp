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
    int x1,p1,x2,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    int a1=0;int a2=0;
    int d1=x1;
    int d2=x2;
    while(d1>0){
        d1=d1/10;
        a1++;
    }
    while(d2>0){
        d2=d2/10;
        a2++;
    }
    if((a2-a1)+(p2-p1)>0){
        cout<<"<"<<endl;
    }
    else if((a2-a1)+(p2-p1)<0){
        cout<<">"<<endl;
    }
    else{
        if(x1>x2){
            cout<<">"<<endl;
        }
        if(x1<x2){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }

}
return 0;
}