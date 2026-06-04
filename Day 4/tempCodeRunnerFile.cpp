#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,fib=0,n,i;
    cout<<"enter a number n";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        fib=a+b;
        cout<<fib<<endl;
        a=b;
    b=fib;
    }
return 0;
}