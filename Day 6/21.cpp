#include<iostream>
using namespace std;

int main() {
    int n;
    int binary[32]; // to store binary digits
    int i = 0;

    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0";
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;  // store remainder
        n = n / 2;
        i++;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}