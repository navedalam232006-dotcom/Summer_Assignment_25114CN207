#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1;
    int arr1[n1];

    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;
    int arr2[n2];

    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Union: ";

    for(int i = 0; i < n1; i++)
        cout << arr1[i] << " ";

    for(int i = 0; i < n2; i++)
    {
        bool found = false;

        for(int j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = true;
                break;
            }
        }

        if(!found)
            cout << arr2[i] << " ";
    }

    return 0;
}