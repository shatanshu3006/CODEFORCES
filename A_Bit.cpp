#include<iostream>

using namespace std;

#define forn(i, n) for(int i = 0; i < int(n); ++i)




int main() {
    

    int n;
    cin >> n;

    int x = 0;
    forn(i, n){
        string s;
        cin >> s;
        if(s[0] == '+')
            x++;
        if(s[0] == '-')
            x--;
        if(s[2] == '+')
            x++;
        if(s[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}