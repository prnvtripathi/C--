// sum of n natural numbers using recursion
#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    int x;
    cout<<"Enter the number : "<<endl;
    cin>>x;
    cout<<"The sum of natural numbers till "<<x<<" is "<<sum(x)<<endl;
    return 0;
}