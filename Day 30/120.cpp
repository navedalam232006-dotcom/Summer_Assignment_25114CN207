#include<iostream>
using namespace std;

int roll[100];
string name[100];
float marks[100];
int n=0;

void addStudent()
{
    cout<<"Enter Number of Students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nStudent "<<i+1<<endl;

        cout<<"Roll Number: ";
        cin>>roll[i];

        cin.ignore();

        cout<<"Name: ";
        getline(cin,name[i]);

        cout<<"Marks: ";
        cin>>marks[i];
    }

    cout<<"Students Added Successfully.\n";
}

void displayStudents()
{
    if(n==0)
    {
        cout<<"No Records Found.\n";
        return;
    }

    cout<<"\n----- Student Records -----\n";

    for(int i=0;i<n;i++)
    {
        cout<<"Roll  : "<<roll[i]<<endl;
        cout<<"Name  : "<<name[i]<<endl;
        cout<<"Marks : "<<marks[i]<<endl;
        cout<<"--------------------------"<<endl;
    }
}

void searchStudent()
{
    int r;
    bool found=false;

    cout<<"Enter Roll Number: ";
    cin>>r;

    for(int i=0;i<n;i++)
    {
        if(roll[i]==r)
        {
            found=true;

            cout<<"Name  : "<<name[i]<<endl;
            cout<<"Marks : "<<marks[i]<<endl;
        }
    }

    if(!found)
        cout<<"Student Not Found.\n";
}

void updateMarks()
{
    int r;
    bool found=false;

    cout<<"Enter Roll Number: ";
    cin>>r;

    for(int i=0;i<n;i++)
    {
        if(roll[i]==r)
        {
            found=true;

            cout<<"Enter New Marks: ";
            cin>>marks[i];

            cout<<"Marks Updated Successfully.\n";
        }
    }

    if(!found)
        cout<<"Student Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout<<"\n===== MINI STUDENT MANAGEMENT PROJECT =====\n";
        cout<<"1. Add Students\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Update Marks\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateMarks();
                break;

            case 5:
                cout<<"Project Closed.\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}