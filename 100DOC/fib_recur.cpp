//fibonacci using recursion
#include<iostream>
using namespace std;

int fib(int n) //recursion
{
    if(n<=1)
        return n;
    return fib(n-2) + fib(n-1);
}
int fib2(int n) //loops
{
    int a=0, b=1, s;
    if(n<=1)
        return n;
    for(int i=2; i<=n; i++)
    {
        s=a+b;
        a=b;
        b=s;
    }
    return s;
}
int F[10];
int mfib(int n) //memoisation
{
    if (n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
    if(F[n-2]==-1)
        F[n-2]=mfib(n-2);
    if (F[n-1]==-1)
        F[n-1]=mfib(n-1);
    F[n]=F[n-2]+F[n-1];
    return F[n-2] + F[n-1];
    }
}
int main()
{
    int a;
    for(int i=0; i<10; i++)
        F[i]=-1;
    cout<<"enter number : ";
    cin>>a;
    cout<<"sum : "<<mfib(a)<<endl;
    //cout<<fib2(a);
    return 0;
}