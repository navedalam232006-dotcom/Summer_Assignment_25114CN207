#include<iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter power (n): ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        result = result * x;
    }

    cout << "Result: " << result;

    return 0;
}