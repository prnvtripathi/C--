#include<iostream>
using namespace std;

class LTMatrix
{
    private:
    int *a;
    int n;

    public:
    LTMatrix()
    {
        n = 2;
        a = new int[2 * (2+1) / 2];
    }

    LTMatrix(int m)
    {
        n = m;
        a = new int[n * (n+1) / 2];
    }

    ~LTMatrix()
    {
        cout<<"\nDestructor Called";
        delete []a;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getdimension() {return n;}
};

void LTMatrix::set(int i, int j, int x)
{
    if(i >= j)
        a[i * (i-1) / 2 + (j-1)] = x; //row major mapping formula i * (i-1) / 2 + (j-1)
}                                     //for column major mapping use formula (n * (j-1) - (j-2) * (j-1)/2) + (i-j)

int LTMatrix::get(int i, int j)
{
    if(i >= j)
        return a[i * (i-1) / 2 + (j-1)];
    return 0;
}

void LTMatrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i >= j)
                cout<<a[i * (i-1) / 2 + (j-1)]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    int a, x;
    cout<<"Enter size : ";
    cin>>a;
    LTMatrix lt(a);

    cout<<"Enter all the elemnts of matrix : ";
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= a ; j++)
        {
            cin>>x;
            lt.set(i, j, x);
        }
    lt.display();
}