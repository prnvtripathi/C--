//e^x using horner's rule with both recursion and loops
#include<iostream>
using namespace std;

double e(double x, double n)
{
    static double s=1;
    if(n==0)
        return s;
    s=1+x/n*s;
    return e(x, n-1); 
}
double e2(double x, double n)
{
    double s;
    for(; n>0 ;n--)
    {
        s=1+x/n*s;
    }
    return s;
}
int main()
{
    double x, n;
    cout<<"Enter power of e : ";
    cin>>x;
    cout<<"Number of terms : ";
    cin>>n;
    cout<<"answer is : "<<e(x,n);
    cout<<e2(x,n);
    return 0; 
}