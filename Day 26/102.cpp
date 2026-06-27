#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "\n----- Result -----" << endl;

    if(age >= 18)
    {
        cout << "Name : " << name << endl;
        cout << "Status : Eligible for Voting";
    }
    else
    {
        cout << "Name : " << name << endl;
        cout << "Status : Not Eligible for Voting";
    }

    return 0;
}