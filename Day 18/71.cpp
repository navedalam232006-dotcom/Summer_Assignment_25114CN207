#include<iostream>
using namespace std;

int main()
{
    int n, key;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Element found at index " << mid;
            found = 1;
            break;
        }
        else if(key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}