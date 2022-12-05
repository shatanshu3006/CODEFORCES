#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char change_case(char c){
	if(isupper(c)){
		return tolower(c);
	}
	else{
		return toupper(c);
	}
}
int main() {
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),change_case);
	cout<<s<<endl;
	return 0;
}

//other solution

// the ASCII value of "A" is 65 and of "a" is 97
//there is a gap of 32 so we have to change if it is in upper casse or not.
#include <bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// Code Here...
string str;
cin >> str;
for(int i = 0; i<str.size(); i++){
if(str[i]>=97){
str[i] = str[i]-32;
}else{
str[i] = str[i]+32;
}
}
cout << str << endl;
return 0;
}