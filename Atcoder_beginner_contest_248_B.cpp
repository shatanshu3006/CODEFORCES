#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,k;
  cin>>a>>b>>k;
  int count=0;
  for(int i=0;i<a*k;i++){
  if(a>=b){
      count=-1;
  }
  }
  for(int i=0;i<a*k;i++){
      a=a*k;
      if(a<b){
          count=count+1;
      }
  }
  cout<<count+1<<endl;
  return 0;
}
// the above code is my solution.
// Below is the editorial
//#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    int res = 0;
    while (a < b) {
        a *= k;
        res++;
    }
    cout << res << endl;
}
