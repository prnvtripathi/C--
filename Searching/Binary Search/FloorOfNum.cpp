#include<iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array (int size);
    void create();
    void display();
    int floor(int key);
    ~Array();

};

Array::Array(int sz)
{
    size = sz;
    A = new int [sz];
}

void Array::create()
{
    cout<<"Enter number of elements: ";
    cin>>length;
    cout<<"Enter array elements"<<endl;

    for(int i{0}; i<length; i++)
        cin>>A[i];
}

void Array::display()
{
    for(int i{0}; i<length; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int Array::floor(int key)
//return the index : greatest number <= key
{   int mid;
    int l=0;
    int h=length-1;

    while(l<=h)
    {
        mid = l + (h-l)/2;

        if(key==A[mid])
            return A[mid];
        
        else if(key<A[mid])
            h=mid-1;
        
        else
            l=mid+1;
    }
    return A[h];
}

Array::~Array()
{
    cout<<"\ndestructor called";
    delete []A;
}

int main()
{
    int sz, key, x;

    cout<<"Enter the size of array : ";
    cin>>sz;

    Array arr(sz);

    arr.create();

    cout<<"\nEnter the number you want floor for : ";
    cin>>key;

    x=arr.floor(key);

    cout<<"\nThe floor is : "<<x;

    return 0;
}