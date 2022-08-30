//static and global variables in recursion
#include<iostream>
using namespace std;

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return n;
}

int main()
{
    int g=5;
    cout<<fun(g)<<endl;
    return 0;
}