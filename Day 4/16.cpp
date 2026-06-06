#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int n = num;
        int sum = 0, digit;

        while (n != 0) {
            digit = n % 10;
            sum = sum + digit * digit * digit;
            n = n / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}