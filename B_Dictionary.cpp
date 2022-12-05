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
    int answer=25*(s[0]-'a');
    answer=answer+(s[1]-'a'+1);
    if(s[1]>s[0]){
        answer=answer-1;
    }
    cout<<answer<<endl;
}
return 0;
}