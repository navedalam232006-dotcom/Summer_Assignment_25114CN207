#include<iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int choice;

    cout<<"Enter Size of Array: ";
    cin>>n;

    cout<<"Enter "<<n<<" Elements:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    do
    {
        cout<<"\n===== ARRAY OPERATIONS =====\n";
        cout<<"1. Display Array\n";
        cout<<"2. Sum of Elements\n";
        cout<<"3. Largest Element\n";
        cout<<"4. Smallest Element\n";
        cout<<"5. Search Element\n";
        cout<<"6. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Array Elements:\n";

                for(int i=0;i<n;i++)
                    cout<<arr[i]<<" ";

                cout<<endl;
                break;

            case 2:
            {
                int sum=0;

                for(int i=0;i<n;i++)
                    sum+=arr[i];

                cout<<"Sum = "<<sum<<endl;
                break;
            }

            case 3:
            {
                int largest=arr[0];

                for(int i=1;i<n;i++)
                {
                    if(arr[i]>largest)
                        largest=arr[i];
                }

                cout<<"Largest Element = "<<largest<<endl;
                break;
            }

            case 4:
            {
                int smallest=arr[0];

                for(int i=1;i<n;i++)
                {
                    if(arr[i]<smallest)
                        smallest=arr[i];
                }

                cout<<"Smallest Element = "<<smallest<<endl;
                break;
            }

            case 5:
            {
                int key;
                bool found=false;

                cout<<"Enter Element to Search: ";
                cin>>key;

                for(int i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        cout<<"Element Found at Position "<<i+1<<endl;
                        found=true;
                        break;
                    }
                }

                if(!found)
                    cout<<"Element Not Found"<<endl;

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