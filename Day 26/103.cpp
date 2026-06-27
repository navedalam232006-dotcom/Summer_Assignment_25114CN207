#include<iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 10000;
    float amount;

    do
    {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance = " << balance << endl;
                break;

            case 2:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit Successful\n";
                break;

            case 3:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance -= amount;
                    cout << "Withdraw Successful\n";
                }
                else
                {
                    cout << "Insufficient Balance\n";
                }
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    }while(choice != 4);

    return 0;
}