//power of 4
#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0)
            return false;
        if(n == 1)
            return true;
        if(n == 2)
            return false;
        if(n == pow(4, (log(n)/log(4))))
            return true;
        return false;    
    }
}g;

int main()
{
    int n;
    cout<<"enter number :";
    cin>>n;
    if(g.isPowerOfFour(n)==1)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}