//e^x series both with recursion and loop
#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double p=1, f=1;
    double r;
    if(n==1)
        return 1;
    r=e(x, n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
double e2(double x, double n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;
    for(i=1; i<=n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    int x, n;
    cout<<"Enter the power of e : ";
    cin>>x;
    cout<<"enter the number of terms : ";
    cin>>n;
    //cout<<"Answer is : "<<e(x, n);
    cout<<e2(x, n);
    return 0;
}