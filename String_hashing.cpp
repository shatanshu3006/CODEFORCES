#include<bits/stdc++.h>
using namespace std;
const int MOD =1e9+7;

long long get_hash(string s){
    long long h=0;
    for(char c:s){
        //basically taking powers but smartly 
        h=(h*31+(c-'a'+1))%MOD;
        
    }
    return h;
}

int main(){
    cout<<(get_hash("abc")==get_hash("abd"))<<endl;
}

//reduce collisions 
// 1. we can use double hashing h1,h2 and then compare them 
// 2. using prefix hashes

// s="abcb" ->  prefix hash(ph) ->  [1,33,1026,31808]
//                hash ("cb")!=hash("abcb")-hash("abc")  ->basically ab has a higher place value(higher value of power of 31) so we have to adjust that 
                // so hash for substring : 
                //     ==> (ph[j]-ph[i]*31^(j-i))

                //so  31808-33*(31^(3-1))


//problem -> Q-queries <= 10^5  each query has [i1,j1] and [i2,j2] check if s[i1,j1]=s[i2,j2]