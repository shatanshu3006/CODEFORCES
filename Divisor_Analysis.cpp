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
#include <random>
#include<numeric>
#include<limits>
#include<stack>
#include<tuple>
#include<deque>
#include<iomanip>
typedef long long ll;
using namespace std;
using ull = unsigned long long;
using ld = long double;
ll mod=1e9+7;

// Function to perform modular exponentiation using binary exponentiation.
// Computes (base^exponent) % mod in O(log exponent) time.
ll binpowiter(ll base, ll exponent, ll mod) {
    if (base == 0 && exponent == 0) return 1; // Convention: 0^0 = 1
    if (exponent == 0 && base != 0) return 1; // a^0 = 1
    if (base == 0 && exponent != 0) return 0; // 0^b = 0 for b > 0

    base = base % mod;
    ll result = 1;

    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent = exponent >> 1;
    }

    return result % mod;
}

int main() {
    ll num_factors;
    cin >> num_factors;

    // Initialize values for number of divisors, sum of divisors, and product of divisors
    ll total_divisors = 1;    // Number of divisors
    ll sum_of_divisors = 1;   // Sum of divisors
    ll product_of_divisors = 1; // Product of divisors
    ll divisor_product_exponent_tracker = 1; // Tracks exponent for product formula (modulo mod - 1)

    while (num_factors--) {
        ll prime, exponent;
        cin >> prime >> exponent;

        // -----------------------------
        // 1. Count of divisors:
        // If a number is represented as p1^a1 * p2^a2 * ..., 
        // total number of divisors = (a1+1)*(a2+1)*...
        // -----------------------------
        total_divisors = total_divisors * (exponent + 1) % mod;

        // -----------------------------
        // 2. Sum of divisors:
        // For prime^k: sum = 1 + prime + prime^2 + ... + prime^k
        // This is a geometric progression => sum = (prime^(k+1) - 1) / (prime - 1)
        // Since division isn't allowed directly in mod, we use modular inverse
        // -----------------------------
        ll geometric_sum_numerator = (binpowiter(prime, exponent + 1, mod) - 1 + mod) % mod;
        ll geometric_sum_denominator_inverse = binpowiter(prime - 1, mod - 2, mod); // Fermat's little theorem
        sum_of_divisors = sum_of_divisors * geometric_sum_numerator % mod * geometric_sum_denominator_inverse % mod;

        // -----------------------------
        // 3. Product of divisors:
        // Product of all divisors of N = N^(d/2), where d = number of divisors
        // For prime^k: product = prime^(1 + 2 + ... + k) = prime^(k*(k+1)/2)
        // We need to raise this value to power of all previous counts of combinations (divisor_product_exponent_tracker)
        // -----------------------------
        ll sum_of_exponents = exponent * (exponent + 1) / 2;
        sum_of_exponents %= (mod - 1); // Reduce exponent modulo (mod - 1) due to Fermat's Theorem
        ll final_exponent = (sum_of_exponents * divisor_product_exponent_tracker) % (mod - 1);

        product_of_divisors = binpowiter(product_of_divisors, exponent + 1, mod) *
                              binpowiter(prime, final_exponent, mod) % mod;

        // Update tracker for future product exponent
        divisor_product_exponent_tracker = divisor_product_exponent_tracker * (exponent + 1) % (mod - 1);
    }

    cout << total_divisors << " " << sum_of_divisors << " " << product_of_divisors << endl;
    return 0;
}