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
    int arr[n],ma=0,mi=101,maxi,mini;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>ma)
        {
            ma=arr[i];
            maxi=i;
        }
        if(arr[i]<=mi)
        {
            mi=arr[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(n-1)-mini;
return 0;
}