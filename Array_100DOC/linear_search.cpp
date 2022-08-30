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
    int lsearch(int key);
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
int Array::lsearch(int key)
{
    for(int i=0; i<length; i++)
    {
        if(A[i]==key)
            return i;
    }
    return -1;
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
    cout<<"\nEnter the element you want to search for : ";
    cin>>key;
    if(arr.lsearch(key)==-1)
        cout<<"\nElement not found!";
    else
        cout<<"\nElement "<<key<<" found at index "<<arr.lsearch(key);
    return 0;
}