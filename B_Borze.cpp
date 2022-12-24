#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
 string s,s2;  // if we take string as an input we can try using string as an output too
 // or editing a string itself;
 cin>>s;
int len=s.length();
for(int i=0;i<len;i++)

{
	if(s[i]=='.'){
		s2+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
		
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
	}
	
} 
 cout<<s2;
return 0;
}