#include<iostream>
using namespace std;

bool powerof2(int n)
{
    if(n==1)
        return true;
    else if (n%2 != 0 || n==0)
        return false;
    return powerof2(n/2);
}

int main()
{
    int a;
    cout<<"Enter number : ";
    cin>>a;
    if(powerof2(a)==1)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}