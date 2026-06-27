#include<iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book b[100];
    int n = 0;
    int choice;

    do
    {
        cout<<"\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Issue Book\n";
        cout<<"4. Return Book\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Book ID: ";
                cin>>b[n].id;

                cin.ignore();

                cout<<"Enter Book Title: ";
                getline(cin,b[n].title);

                cout<<"Enter Author Name: ";
                getline(cin,b[n].author);

                b[n].issued=false;

                n++;

                cout<<"Book Added Successfully.\n";
                break;

            case 2:
                cout<<"\n------ Book List ------\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"Book ID : "<<b[i].id<<endl;
                    cout<<"Title   : "<<b[i].title<<endl;
                    cout<<"Author  : "<<b[i].author<<endl;

                    if(b[i].issued)
                        cout<<"Status  : Issued\n";
                    else
                        cout<<"Status  : Available\n";

                    cout<<"-------------------------\n";
                }
                break;

            case 3:
            {
                int id;
                cout<<"Enter Book ID: ";
                cin>>id;

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        found=true;

                        if(!b[i].issued)
                        {
                            b[i].issued=true;
                            cout<<"Book Issued Successfully.\n";
                        }
                        else
                        {
                            cout<<"Book Already Issued.\n";
                        }
                    }
                }

                if(!found)
                    cout<<"Book Not Found.\n";

                break;
            }

            case 4:
            {
                int id;
                cout<<"Enter Book ID: ";
                cin>>id;

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        found=true;

                        if(b[i].issued)
                        {
                            b[i].issued=false;
                            cout<<"Book Returned Successfully.\n";
                        }
                        else
                        {
                            cout<<"Book is Already Available.\n";
                        }
                    }
                }

                if(!found)
                    cout<<"Book Not Found.\n";

                break;
            }

            case 5:
                cout<<"Thank You.\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}