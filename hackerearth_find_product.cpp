#include <iostream>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int answer=1;
for(int i=0;i<n;i++){
    answer=answer*arr[i];
}
cout<<answer<<endl;
return 0;
}