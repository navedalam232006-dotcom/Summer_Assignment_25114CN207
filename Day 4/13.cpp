#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,fib=0,n,i;
    cout<<"enter a number n";
    cin>>n;
    if (n==1)
    {
        cout<<a<<endl;
    }
    else if (n==2)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;cout<<b<<endl;
      for ( i = 3; i <= n; i++)
    {
        fib=a+b;
        cout<<fib<<endl;
        a=b;
    b=fib;
    }  
    }
return 0;
}