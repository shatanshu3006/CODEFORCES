#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ITS ABOUT DRIVE, ITS ABOUT POWER!!
//WE STAY HUNGRY, WE DEVOUR!!
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if (n % 2 == 1) {
            cout << "Mike\n";
            continue;
        }

        int smallest = 0;
        for (int i = 0; i < n; ++i)
            if (arr[i] < arr[smallest])
                smallest = i;

        if (smallest % 2 == 0) cout << "Joe\n";
        else cout << "Mike\n";

}
return 0;
}