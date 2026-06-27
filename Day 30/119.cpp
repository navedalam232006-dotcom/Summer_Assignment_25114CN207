#include<iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout<<"\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Employee\n";
        cout<<"2. Display Employees\n";
        cout<<"3. Search Employee\n";
        cout<<"4. Update Salary\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cout<<"Enter Employee ID: ";
                cin>>emp[n].id;

                cin.ignore();

                cout<<"Enter Employee Name: ";
                getline(cin, emp[n].name);

                cout<<"Enter Department: ";
                getline(cin, emp[n].department);

                cout<<"Enter Salary: ";
                cin>>emp[n].salary;

                n++;

                cout<<"Employee Added Successfully.\n";
                break;

            case 2:

                cout<<"\n----- Employee Records -----\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"ID         : "<<emp[i].id<<endl;
                    cout<<"Name       : "<<emp[i].name<<endl;
                    cout<<"Department : "<<emp[i].department<<endl;
                    cout<<"Salary     : "<<emp[i].salary<<endl;
                    cout<<"-----------------------------"<<endl;
                }

                break;

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Employee ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        found=true;

                        cout<<"Name       : "<<emp[i].name<<endl;
                        cout<<"Department : "<<emp[i].department<<endl;
                        cout<<"Salary     : "<<emp[i].salary<<endl;
                    }
                }

                if(!found)
                    cout<<"Employee Not Found.\n";

                break;
            }

            case 4:
            {
                int id;
                bool found=false;

                cout<<"Enter Employee ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(emp[i].id==id)
                    {
                        found=true;

                        cout<<"Enter New Salary: ";
                        cin>>emp[i].salary;

                        cout<<"Salary Updated Successfully.\n";
                    }
                }

                if(!found)
                    cout<<"Employee Not Found.\n";

                break;
            }

            case 5:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice!\n";
        }

    }while(choice!=5);

    return 0;
}