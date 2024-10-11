#include <cstdint>
#include <iostream>
using namespace std;

/*
 * function to calculate factorial
 */
uint16_t factorial(const uint16_t x) { // for larger numbers
    if (x==0 || x== 1) {
        return 1;
    }
    uint64_t result = 1;
    for (uint16_t i=2; i <= x; i++) {
        result *= i;
    }
    return result;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    int n;

    // get and validate user input
    cout << "Enter n: ";
    cin >> n;

    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = factorial(n);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}