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
    int binSearch(int key);
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

int Array::binSearch(int key)
{   int mid;
    int l=0;
    int h=length-1;

    if(A[l]<A[h])//check oreder is increasing
    {
        while(l<=h)
        {
            mid=l+(h-l)/2;//mid should be (low bound + high bound)/2
            if(key==A[mid])
                return mid;//ans found at mid
            else if(key<A[mid])
                h=mid-1;
            else
                l=mid+1;
        }
    }

    else if(A[l]>A[h])//check order is decreasing
    {
        while(l<=h)
        {
            mid=l+(h-l)/2;//mid should be (low bound + high bound)/2
            if(key==A[mid])
                return mid;
            else if(key<A[mid])
                l=mid+1;
            else
                h=mid-1;
        }
    }

    else
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
    if(arr.binSearch(key)==-1)
        cout<<"\nElement not found!";
    else
        cout<<"\nElement "<<key<<" found at index "<<arr.binSearch(key);
    return 0;
}