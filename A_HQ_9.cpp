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
	int flag=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]>=33&&s[i]<=126){
	    if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
	    flag=1;
	}
	}
	if(flag){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
return 0;
}