#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,fib=0,n,i;
    cout<<"enter a number n";
    cin>>n;
    if (n==1)
    {
        fib=0;
    }
    else if (n==2)
    {
        fib=1;
    }
    if (n>=3)
    {
        for ( i = 3; i <= n; i++)
    {
        fib=a+b;
        a=b;
    b=fib;
    }
    }
    
    cout<<fib<<endl;
return 0;
}