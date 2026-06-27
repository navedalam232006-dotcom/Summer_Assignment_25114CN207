#include<iostream>
using namespace std;

int main()
{
    char str[100];
    
    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    for(int i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            currLen++;
        }
        else
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = start;
            }

            currLen = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    cout << "Longest Word = ";

    for(int i = maxStart; i < maxStart + maxLen; i++)
    {
        cout << str[i];
    }

    cout << endl;
    cout << "Length = " << maxLen;

    return 0;
}