#include <cstdint>
#include <iostream>
using namespace std;

/*
 * Function to calculate factorial of a number
 */
uint64_t factorial(const uint16_t x) {  // Using uint64_t for larger numbers
    if (x == 0 || x == 1) {
        return 1;
    }
    uint64_t result = 1;
    for (uint16_t i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

/*
 * Main function to calculate C(n,k)
 */
int main() {
    int n, k;

    // Get and validate user input for n
    cout << "Enter n (>= 0): ";
    cin >> n;
    if (n < 0) {
        cout << -1 << endl;  // Invalid input, return -1
        return 0;
    }

    // Get and validate user input for k
    cout << "Enter k (0 <= k <= n): ";
    cin >> k;
    if (k < 0 || k > n) {
        cout << -1 << endl;  // Invalid input, return -1
        return 0;
    }

    // Calculate C(n,k) = n! / (k! * (n-k)!)
    uint64_t c_n_k = factorial(n) / (factorial(k) * factorial(n - k));  // Using uint64_t

    // Write out the result
    cout << "C(" << n << ", " << k << ") = " << c_n_k << endl;

    return 0;
}
