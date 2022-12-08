#include <iostream>
using namespace std;
int main() {
	int a,b,s,m;
	int sum=0;
	cin>>a>>b>>s;
    for(int i=a;i<=b;i++){
		m=i%10;    
		sum=sum+m;    
		i=i/10;
	}
	if(sum==s){
		cout<<sum<<endl;
	}
}