#include <iostream>
using namespace std;

int main() {
    int n, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        digit = n % 10;   // last digit
        sum += digit;     // add to sum
        n = n / 10;       // remove last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}