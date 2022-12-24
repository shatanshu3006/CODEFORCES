#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, d, sum = 0;
    cin >> n >> d;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
        sum += a[i];
    }
    if (sum+10*(n-1)>d)
        cout<<-1<<endl;
    else{
        cout<<(d-sum)/5<<endl;
    }
}