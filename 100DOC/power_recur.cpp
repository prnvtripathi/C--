//power function using recursion
#include<iostream>
using namespace std;

double power(double m, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return m;
    return power(m, n-1) * m;
}
double mypow(double x, int n) //leetcode solution
{
    double ans = 1.0;
    long long nn=n;
    if (nn<0) nn = -1 * nn;
    while(nn>0)
    {
        if (nn%2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if(n<0)
        ans = (double)(1.0) / (double)(ans);
    return ans;
}

int main()
{
    double x; int n;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter power : ";
    cin>>n;
    cout<<"The answer is "<<mypow(x, n)<<endl;
    return 0;
}