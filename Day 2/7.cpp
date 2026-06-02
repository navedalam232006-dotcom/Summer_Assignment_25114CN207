#include <iostream>
using namespace std;

int main() {
    int n, digit;
    long long product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        digit = n % 10;      // last digit
        product *= digit;    // multiply with product
        n = n / 10;          // remove last digit
    }

    cout << "Product of digits = " << product << endl;

    return 0;
}