#include <iostream>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if((s[0]+s[1]+s[2])==(s[3]+s[4]+s[5])){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}