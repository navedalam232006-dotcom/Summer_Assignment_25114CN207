#include<iostream>
using namespace std;

int main()
{
    int roll[100];
    string name[100];
    float marks[100];
    int n, choice;

    cout<<"Enter Number of Students: ";
    cin>>n;

    do
    {
        cout<<"\n===== STUDENT RECORD SYSTEM =====\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display Students\n";
        cout<<"3. Search Student\n";
        cout<<"4. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                for(int i=0;i<n;i++)
                {
                    cout<<"\nStudent "<<i+1<<endl;

                    cout<<"Roll No: ";
                    cin>>roll[i];

                    cin.ignore();

                    cout<<"Name: ";
                    getline(cin,name[i]);

                    cout<<"Marks: ";
                    cin>>marks[i];
                }

                cout<<"Records Added Successfully.\n";
                break;

            case 2:

                cout<<"\n----- Student Records -----\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"Roll  : "<<roll[i]<<endl;
                    cout<<"Name  : "<<name[i]<<endl;
                    cout<<"Marks : "<<marks[i]<<endl;
                    cout<<"--------------------------"<<endl;
                }

                break;

            case 3:
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

                break;
            }

            case 4:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=4);

    return 0;
}