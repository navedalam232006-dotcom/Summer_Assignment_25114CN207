#include<iostream>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Account a[100];
    int n=0;
    int choice;

    do
    {
        cout<<"\n====== BANK ACCOUNT SYSTEM ======\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Display Accounts\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cout<<"Enter Account Number: ";
                cin>>a[n].accNo;

                cin.ignore();

                cout<<"Enter Account Holder Name: ";
                getline(cin,a[n].name);

                cout<<"Enter Initial Balance: ";
                cin>>a[n].balance;

                n++;

                cout<<"Account Created Successfully.\n";
                break;

            case 2:
            {
                int acc;
                float amount;

                cout<<"Enter Account Number: ";
                cin>>acc;

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(a[i].accNo==acc)
                    {
                        found=true;

                        cout<<"Enter Deposit Amount: ";
                        cin>>amount;

                        a[i].balance+=amount;

                        cout<<"Deposit Successful.\n";
                        cout<<"Current Balance = "<<a[i].balance<<endl;
                    }
                }

                if(!found)
                    cout<<"Account Not Found.\n";

                break;
            }

            case 3:
            {
                int acc;
                float amount;

                cout<<"Enter Account Number: ";
                cin>>acc;

                bool found=false;

                for(int i=0;i<n;i++)
                {
                    if(a[i].accNo==acc)
                    {
                        found=true;

                        cout<<"Enter Withdraw Amount: ";
                        cin>>amount;

                        if(amount<=a[i].balance)
                        {
                            a[i].balance-=amount;

                            cout<<"Withdrawal Successful.\n";
                            cout<<"Remaining Balance = "<<a[i].balance<<endl;
                        }
                        else
                        {
                            cout<<"Insufficient Balance.\n";
                        }
                    }
                }

                if(!found)
                    cout<<"Account Not Found.\n";

                break;
            }

            case 4:

                cout<<"\n------ ACCOUNT DETAILS ------\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"Account Number : "<<a[i].accNo<<endl;
                    cout<<"Name           : "<<a[i].name<<endl;
                    cout<<"Balance        : "<<a[i].balance<<endl;
                    cout<<"-----------------------------\n";
                }

                break;

            case 5:
                cout<<"Thank You.\n";
                break;

            default:
                cout<<"Invalid Choice.\n";
        }

    }while(choice!=5);

    return 0;
}