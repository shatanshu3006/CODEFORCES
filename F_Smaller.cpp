
#include <bits/stdc++.h>


using namespace std;




typedef long long int ll;

const ll MOD = 1000000007;

#define f(variable,s,e,j) for(ll variable = s ; variable < e ; variable+=j)
#define fr(variable,s,e,j) for(ll variable = s ; variable > e ; variable-=j)
#define test(n) while(n--)
#define trav(x,y) for(auto x : y)
#define yeah cout << "YES\n"
#define nah cout << "NO\n"
#define endl '\n'
#define line "------------------------------------------"


#define vec vector
#define fi first
#define se second
#define pr pair

#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()

#define MODadd(x,y,m) ((x % m) + (y % m) + m) % m
#define MODsub(x,y,m) ((max(x,y) % m) - (min(x,y) % m) + m) % m
#define MODmul(x,y,m) ((x % m) * (y % m)) % m

#define setbits(x) __builtin_popcountll(x)
#define trailzero(x) __builtin_ctz(x)

#ifndef vipplovve
#define debug(value) cerr << #value << " : " << value << endl;
#else
#define debug(value);
#endif

int main()
{
   
    
    // USACO.

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);
    
    // The Code's Here.

    ll t;

    cin >> t;

    test(t)
    {
        ll n;

        cin >> n;

        ll A = 1, B = 1;

        char maxA = 'a', maxB = 'a';

        f(x,0,n,1)
        {
            ll type, k;

            string input;

            cin >> type >> k >> input;

            if(type == 1)
            {
                A += k * input.size();
                maxA = max(maxA, *max_element(all(input)));
            }
            
            else
            {
                B += k * input.size();
                maxB = max(maxB, *max_element(all(input)));
            }

            if(maxB > 'a')
                yeah;

            else if(maxA == 'a' && A < B)
                yeah;

            else
                nah;
        }
    }

    return 0;
}