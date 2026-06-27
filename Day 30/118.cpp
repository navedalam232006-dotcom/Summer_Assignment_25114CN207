#include<iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    bool issued;
};

int main()
{
    Book book[50];

    int n=0;
    int choice;

    do
    {
        cout<<"\n===== MINI LIBRARY SYSTEM =====\n";
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
                cin>>book[n].id;

                cin.ignore();

                cout<<"Enter Book Title: ";
                getline(cin,book[n].title);

                book[n].issued=false;

                n++;

                cout<<"Book Added Successfully.\n";

                break;

            case 2:

                cout<<"\n----- Library Books -----\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"Book ID : "<<book[i].id<<endl;
                    cout<<"Title   : "<<book[i].title<<endl;
                    cout<<"Status  : ";

                    if(book[i].issued)
                        cout<<"Issued";
                    else
                        cout<<"Available";

                    cout<<endl;
                    cout<<"------------------------"<<endl;
                }

                break;

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(book[i].id==id)
                    {
                        found=true;

                        if(book[i].issued)
                            cout<<"Book Already Issued.\n";
                        else
                        {
                            book[i].issued=true;
                            cout<<"Book Issued Successfully.\n";
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
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(book[i].id==id)
                    {
                        found=true;

                        if(book[i].issued)
                        {
                            book[i].issued=false;
                            cout<<"Book Returned Successfully.\n";
                        }
                        else
                        {
                            cout<<"Book Already Available.\n";
                        }
                    }
                }

                if(!found)
                    cout<<"Book Not Found.\n";

                break;
            }

            case 5:
                cout<<"Thank You!\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    }while(choice!=5);

    return 0;
}