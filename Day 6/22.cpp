#include<iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;      // get last digit (0 or 1)
        decimal = decimal + remainder * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal number: " << decimal;

    return 0;
}