#include<iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    int n;

    cout<<"Enter Number of Students: ";
    cin>>n;

    Student s[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Roll No: ";
        cin>>s[i].roll;

        cout<<"Name: ";
        cin>>s[i].name;

        cout<<"Marks: ";
        cin>>s[i].marks;
    }

    cout<<"\n------ Student Records ------\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Roll : "<<s[i].roll<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
        cout<<"----------------------"<<endl;
    }

    return 0;
}