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
    string s;
    cin>>s;
    string s2,s3;
    int n=s.size();
    if(n%2==0){
        for(int i=0;i<n;i++){
            if(i>=0 && i<n/2){
                s2.push_back(s[i]);
            }
            else{
                s3.push_back(s[i]);
            }
        }
        sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        if(s2==s3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
                if(i>=0 and i<n/2)
                s2.push_back(s[i]);
                else if(i>=(n/2+1) and i<n)
                    s3.push_back(s[i]);
            }
            sort(s2.begin(),s2.end());
            sort(s3.begin(),s3.end());
            if(s2==s3)  cout<<"YES"<<endl;
            else    cout<<"NO"<<endl;

    }
}
return 0;
}