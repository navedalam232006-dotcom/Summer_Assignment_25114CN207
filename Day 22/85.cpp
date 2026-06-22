#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    int start = 0;
    int end = len - 1;
    bool palindrome = true;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}