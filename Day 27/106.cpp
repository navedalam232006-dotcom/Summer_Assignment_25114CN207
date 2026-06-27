#include<iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

int main()
{
    int n;

    cout<<"Enter Number of Employees: ";
    cin>>n;

    Employee emp[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"ID: ";
        cin>>emp[i].id;

        cout<<"Name: ";
        cin>>emp[i].name;

        cout<<"Salary: ";
        cin>>emp[i].salary;
    }

    cout<<"\n------ Employee Records ------\n";

    for(int i=0;i<n;i++)
    {
        cout<<"ID     : "<<emp[i].id<<endl;
        cout<<"Name   : "<<emp[i].name<<endl;
        cout<<"Salary : "<<emp[i].salary<<endl;
        cout<<"--------------------------"<<endl;
    }

    return 0;
}