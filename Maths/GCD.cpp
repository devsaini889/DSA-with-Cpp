/* Implementation of GCD */
/* Euclidean Algorithm */

#include <iostream>
using namespace std;
// Function to calculate GCD using the Euclidean algorithm
// This method is efficient and works by repeatedly replacing the larger number by the remainder of the division
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Alternative implementation using subtraction method
// This is less efficient than the above method but demonstrates the concept of GCD.
// int gcd(int a, int b) {
//     while (a != b) {
//         if (a > b)
//             a = a - b;
//         else
//             b = b - a;
//     }
//     return a;
// }

int main() {
    int a = 18, b = 24;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
