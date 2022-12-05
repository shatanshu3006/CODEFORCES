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
    string a,b;
    cin>>a>>b;
    int p=a.length();
    int q=b.length();
    if(a[p-1]=='L'){
        if(b[q-1]=='L'){
        if(p>q){
            cout<<">"<<endl;
        }
        if(p==q){
            cout<<"="<<endl;
        }
        if(p<q){
            cout<<"<"<<endl;
        }
        }
        else{
            cout<<">"<<endl;
        }
    }
    if(a[p-1]=='M'){
        if(b[q-1]=='L'){
            cout<<"<"<<endl;
        }
        else{
            if(b[q-1]=='M'){
                if(p==q){
                    cout<<"="<<endl;
                }
            }
            if(b[q-1]=='S'){
                cout<<">"<<endl;
            }
        }
    }
    if(a[p-1]=='S'){
        if(b[q-1]=='M'){
            cout<<"<"<<endl;
        }
        if(b[q-1]=='L'){
            cout<<"<"<<endl;
        }
        if(b[q-1]=='S'){
            if(p==q){
                cout<<"="<<endl;
            }
            if(p>q){
                cout<<"<"<<endl;
            }
            if(p<q){
                cout<<">"<<endl;
            }
        }
    }

}
return 0;
}