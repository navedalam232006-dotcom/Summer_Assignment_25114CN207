#include<iostream>
using namespace std;

int main()
{
    string name;
    int roll;
    float m1,m2,m3,m4,m5;
    float total,percentage;

    cout<<"Enter Student Name: ";
    cin>>name;

    cout<<"Enter Roll Number: ";
    cin>>roll;

    cout<<"Enter Marks of 5 Subjects:\n";

    cin>>m1>>m2>>m3>>m4>>m5;

    total = m1+m2+m3+m4+m5;
    percentage = total/5;

    cout<<"\n========== MARKSHEET ==========\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Roll : "<<roll<<endl;

    cout<<"Subject 1 : "<<m1<<endl;
    cout<<"Subject 2 : "<<m2<<endl;
    cout<<"Subject 3 : "<<m3<<endl;
    cout<<"Subject 4 : "<<m4<<endl;
    cout<<"Subject 5 : "<<m5<<endl;

    cout<<"---------------------------"<<endl;
    cout<<"Total = "<<total<<endl;
    cout<<"Percentage = "<<percentage<<"%"<<endl;

    if(percentage>=90)
        cout<<"Grade : A+"<<endl;
    else if(percentage>=75)
        cout<<"Grade : A"<<endl;
    else if(percentage>=60)
        cout<<"Grade : B"<<endl;
    else if(percentage>=40)
        cout<<"Grade : C"<<endl;
    else
        cout<<"Grade : Fail"<<endl;

    return 0;
}