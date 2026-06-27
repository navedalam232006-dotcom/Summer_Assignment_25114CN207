#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    int choice;

    cout<<"Enter a String: ";
    cin.getline(str,100);

    do
    {
        cout<<"\n===== STRING OPERATIONS =====\n";
        cout<<"1. Display String\n";
        cout<<"2. Find Length\n";
        cout<<"3. Reverse String\n";
        cout<<"4. Convert to Uppercase\n";
        cout<<"5. Convert to Lowercase\n";
        cout<<"6. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"String = "<<str<<endl;
                break;

            case 2:
                cout<<"Length = "<<strlen(str)<<endl;
                break;

            case 3:
            {
                cout<<"Reversed String = ";

                for(int i=strlen(str)-1;i>=0;i--)
                    cout<<str[i];

                cout<<endl;
                break;
            }

            case 4:
            {
                cout<<"Uppercase = ";

                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a' && str[i]<='z')
                        cout<<char(str[i]-32);
                    else
                        cout<<str[i];
                }

                cout<<endl;
                break;
            }

            case 5:
            {
                cout<<"Lowercase = ";

                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='A' && str[i]<='Z')
                        cout<<char(str[i]+32);
                    else
                        cout<<str[i];
                }

                cout<<endl;
                break;
            }

            case 6:
                cout<<"Program Ended"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=6);

    return 0;
}