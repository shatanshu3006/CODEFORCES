#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int ans=0;
	int t;
	vector<int>v1;
	vector<int>v2;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    v1.push_back(n);
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<t;i++){
	    for(int j=t;j>=1;j--){
	        v2.push_back(v1[i]*j);
	    }
	}
	sort(v2.begin(),v2.end());
	cout<<v2[t-1]<<endl;
	
}
