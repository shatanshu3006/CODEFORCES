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
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int evencount=0;
int oddcount=0;
int positivecount=0;
int negativecount=0;
for(int i=0;i<n;i++){
    if(abs(arr[i])%2==0){
        evencount++;
    }
    else{
        oddcount++;
    }
}
for(int i=0;i<n;i++)
{
    if(arr[i]>0){
        positivecount++;
    }
    if(arr[i]<0){
        negativecount++;
    }
}
cout<<"Even: "<<evencount<<endl;
cout<<"Odd: "<<oddcount<<endl;
cout<<"Positive: "<<positivecount<<endl;
cout<<"Negative: "<<negativecount<<endl;
    return 0;
}