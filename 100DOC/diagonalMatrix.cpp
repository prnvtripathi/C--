#include<iostream>
using namespace std;

class Diagonal
{
    private:
    int *a;
    int n;

    public:
    Diagonal()
    {
        n = 2;
        a = new int[2];
    }

    Diagonal(int m)
    {
        n = m;
        a = new int[n];
    }

    ~Diagonal()
    {
        cout<<"\nDestructor Called";
        delete []a;
    }

    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
};

void Diagonal::set(int i, int j, int x)
{
    if(i==j)
        a[i-1] = x;
}

int Diagonal::get(int i, int j)
{
    if(i==j)
        return a[i-1];
    return 0;
}

void Diagonal::display()
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                cout<<a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main()
{
    Diagonal mat(4);
    mat.set(1, 1, 5);
    mat.set(2, 2, 9);
    mat.set(3, 3, 12);
    mat.set(4, 4, 6);

    mat.display();
}