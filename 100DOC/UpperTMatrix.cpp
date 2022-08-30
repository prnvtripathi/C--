#include<iostream>
using namespace std;

class UTMatrix
{
    private:
    int *a;
    int n;

    public:
    UTMatrix()
    {
        n = 2;
        a = new int[2 * (2+1) / 2];
    }

    UTMatrix(int m)
    {
        n = m;
        a = new int[n * (n+1) / 2];
    }

    ~UTMatrix()
    {
        cout<<"\nDestructor Called";
        delete []a;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    int getdimension() {return n;}
};

void UTMatrix::set(int i, int j, int x)
{
    if(i <= j)
        a[(n * (i-1) - (i-2) * (i-1)/2) + (j-i)] = x; //column major mapping formula j * (j-1) / 2 + (i-1)
}                                     //for row major mapping use formula (n * (i-1) - (i-2) * (i-1)/2) + (j-i)

int UTMatrix::get(int i, int j)
{
    if(i <= j)
        return a[(n * (i-1) - (i-2) * (i-1)/2) + (j-i)];
    return 0;
}

void UTMatrix::display()
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i <= j)
                cout<<a[(n * (i-1) - (i-2) * (i-1)/2) + (j-i)]<<" ";
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
    UTMatrix ut(a);

    cout<<"Enter all the elemnts of matrix : ";
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= a ; j++)
        {
            cin>>x;
            ut.set(i, j, x);
        }
    ut.display();
}