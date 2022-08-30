//tower  of hanoi using recursion
#include<iostream>
using namespace std;

void toh(int n, int a, int b, int c)
{
    if(n>0)
    {
    toh(n-1, a, c, b);
    cout<<"From "<<a<<" to "<<c<<endl;
    toh(n-1, b, a, c);
    }
}

int main()
{
    int n;
    cout<<"Enter number of disks : ";
    cin>>n;
    toh(n, 1, 2, 3);
}