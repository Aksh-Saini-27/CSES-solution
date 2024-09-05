#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd, multiply the current result by base
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  // Square the base
        exp /= 2;  // Divide exp by 2
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << power(2, n, MOD) << endl;

    return 0;
}
