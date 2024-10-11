#include <cstdint>
#include <iostream>
using namespace std;

/*
 * function to calculate factorial
 */
uint16_t factorial(const uint16_t x) {
    // for larger numbers
    if (x==0 || x== 1) {
        return 1;
    }
    uint64_t result = 1;
    for (uint16_t i=2; i <= x; i++) {
        result *= i;
    }
    return result;
}
/*
 * Main function to calculate C(n,k);
 */
int main() {
    int n, k;

    // get and validate user input for n
    cout << "Enter n: ";
    cin >> n;
    while (n < 0) {
        cout << "Invalid input. enter a number greater than or equalto 0:";
        cin >> n;
    }

    // get and validate user input for k
    cout << "Enter k: ";
    cin >> k;
    while (k < 0 || k > n) {
        cout << "Invalid input. Enter a number between 0 and " << n << "; ";
        cin >> k;
    }
    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = factorial(n);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}