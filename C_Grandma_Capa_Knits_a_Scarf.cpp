#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
#include<map>
#include<string>
#include<iterator>
#include<bitset>
#include<functional>
#include<random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<iomanip>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=1e9;
        for(char ch='a';ch<='z';ch++){
            int i=0;
            int j=n-1;
            int cnt=0;
            bool found=true;
            while(i<j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else if(s[i]==ch){
                    i++;
                    cnt++;
                }
                else if(s[j]==ch){
                    j--;
                    cnt++;
                }
                else{
                    found=false;
                    break;
                }
            }
            
            if(found){
                ans=min(ans,cnt);
            }
            

        }
        if(ans==1e9){
            cout<<-1<<endl;

        }
        else
        cout<<ans<<endl;
    }
}