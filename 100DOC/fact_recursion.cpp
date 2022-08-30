//factorial using recursion
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
        return n;
    else
        return fact(n-1) * n;
}

int main()
{
    int x;
    cout<<"enter the number :";
    cin>>x;
    cout<<"Factorial of "<<x<<" is "<<fact(x)<<endl;
    return 0;
}