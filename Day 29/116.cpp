#include<iostream>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int n=0;
    int choice;

    do
    {
        cout<<"\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout<<"1. Add Product\n";
        cout<<"2. Display Products\n";
        cout<<"3. Search Product\n";
        cout<<"4. Update Quantity\n";
        cout<<"5. Exit\n";

        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:

                cout<<"Enter Product ID: ";
                cin>>p[n].id;

                cin.ignore();

                cout<<"Enter Product Name: ";
                getline(cin,p[n].name);

                cout<<"Enter Quantity: ";
                cin>>p[n].quantity;

                cout<<"Enter Price: ";
                cin>>p[n].price;

                n++;

                cout<<"Product Added Successfully\n";
                break;

            case 2:

                cout<<"\n------ PRODUCT LIST ------\n";

                for(int i=0;i<n;i++)
                {
                    cout<<"ID       : "<<p[i].id<<endl;
                    cout<<"Name     : "<<p[i].name<<endl;
                    cout<<"Quantity : "<<p[i].quantity<<endl;
                    cout<<"Price    : "<<p[i].price<<endl;
                    cout<<"--------------------------"<<endl;
                }

                break;

            case 3:
            {
                int id;
                bool found=false;

                cout<<"Enter Product ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        found=true;

                        cout<<"ID       : "<<p[i].id<<endl;
                        cout<<"Name     : "<<p[i].name<<endl;
                        cout<<"Quantity : "<<p[i].quantity<<endl;
                        cout<<"Price    : "<<p[i].price<<endl;
                    }
                }

                if(!found)
                    cout<<"Product Not Found"<<endl;

                break;
            }

            case 4:
            {
                int id;
                bool found=false;

                cout<<"Enter Product ID: ";
                cin>>id;

                for(int i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        found=true;

                        cout<<"Enter New Quantity: ";
                        cin>>p[i].quantity;

                        cout<<"Quantity Updated Successfully"<<endl;
                    }
                }

                if(!found)
                    cout<<"Product Not Found"<<endl;

                break;
            }

            case 5:
                cout<<"Thank You"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=5);

    return 0;
}