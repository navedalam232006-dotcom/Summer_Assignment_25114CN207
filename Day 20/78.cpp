#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    int A[n][n];
    bool symmetric = true;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Symmetric Matrix";
    else
        cout << "Not Symmetric Matrix";

    return 0;
}