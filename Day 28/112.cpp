#include<iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c[100];

    int n=0;
    int choice;

    do
    {
        cout<<"\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display Contacts\n";
        cout<<"3. Search Contact\n";
        cout<<"4. Delete Contact\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cin.ignore();

                cout<<"Enter Name: ";
                getline(cin,c[n].name);

                cout<<"Enter Phone Number: ";
                getline(cin,c[n].phone);

                n++;

                cout<<"Contact Saved Successfully\n";

                break;

            case 2:

                cout<<"\n----- Contact List -----\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"Name : "<<c[i].name<<endl;
                    cout<<"Phone: "<<c[i].phone<<endl;
                    cout<<"----------------------"<<endl;
                }

                break;

            case 3:
            {
                string search;

                cin.ignore();

                cout<<"Enter Name to Search: ";
                getline(cin,search);

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(c[i].name==search)
                    {
                        found=true;

                        cout<<"Name : "<<c[i].name<<endl;
                        cout<<"Phone: "<<c[i].phone<<endl;
                    }
                }

                if(!found)
                    cout<<"Contact Not Found\n";

                break;
            }

            case 4:
            {
                string del;

                cin.ignore();

                cout<<"Enter Name to Delete: ";
                getline(cin,del);

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(c[i].name==del)
                    {
                        found=true;

                        for(int j=i;j<n-1;j++)
                        {
                            c[j]=c[j+1];
                        }

                        n--;

                        cout<<"Contact Deleted Successfully\n";
                        break;
                    }
                }

                if(!found)
                    cout<<"Contact Not Found\n";

                break;
            }

            case 5:
                cout<<"Thank You\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=5);

    return 0;
}