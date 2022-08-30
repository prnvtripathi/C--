//combination using recursion and factorial
#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==1)
        return 1;
    return fact(n-1) * n;
}

int c(int n, int r) //normally using factorial function
{
    int a, b, c;
    a = fact(n);
    b = fact(r);
    c = fact(n-r);
    return a/(b*c);
}

int crec(int n, int r)//recursive function
{
    if(r==0 || n==r)
        return 1;
    else
        return crec(n-1, r-1) + crec(n-1, r);
}

int main()
{
    int n,r;
    cout<<"Enter value of n and r : ";
    cin>>n>>r;
    cout<<"Ans with factorial functions : "<<c(n, r)<<endl;
    cout<<"Ans with recursive function : "<<crec(n, r);
    return 0;
}