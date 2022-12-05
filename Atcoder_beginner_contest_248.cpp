#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
string s;
cin>>s;
int ans=45;
for(int i=0;i<9;i++){
    ans=ans-((int)s[i]-'0');
}
cout<<ans<<endl;
return 0;
}