#include<iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int len1 = 0, len2 = 0;

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        cout << "Not Anagram";
        return 0;
    }

    for(int i = 0; i < len1; i++)
    {
        int count1 = 0, count2 = 0;

        for(int j = 0; j < len1; j++)
        {
            if(str1[i] == str1[j])
                count1++;

            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2)
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}