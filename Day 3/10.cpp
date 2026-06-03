#include <iostream>
using namespace std;

int main() {
    int start, end, i, j;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        bool isPrime = true;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    return 0;
}