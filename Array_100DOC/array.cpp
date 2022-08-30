#include <iostream>
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
    void append(int x);
    void insert(int index, int x);
    int remove(int index);
    int get(int index);
    void set(int index, int x);
    int max();
    int min();
    int sum();
    int sum(int n);
    int avg();
    void reverse();
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

void Array::append(int x)
{
    if(length<size)
    {
    A[length]=x;
    length++;
    }
    else
        cout<<"No more space!";
}

void Array::insert(int index, int x)
{
    if(index>=0 && index<=length && length<size)
    {
        for(int i=length; i>index; i--)
            A[i]=A[i-1];
        A[index]=x;
        length++;
    }
    else
        cout<<"insertion not possible!"<<endl;
}

int Array::remove(int index)
{
    int x=0;
    if(index>=0 && index<=length)
    {
        x=A[index];
        for(int i=index; i<length-1; i++)
            A[i]=A[i+1];
    length--;
    }
    return x;//to show wchich element is deleted
}

int Array::get(int index)
{
    if(index < length && index >= 0)
        return A[index];
    return -1;
}

void Array::set(int index, int x)
{
    if(index < length && index >= 0)
        A[index] = x;
    else
        cout<<"not valid!";
}

int Array::max()
{
    int max = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] > max)
        max = A[i];
    }
    return max;
}

int Array::min()
{
    int min = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] < min)
        min = A[i];
    }
    return min;
}

int Array::sum()
{
    int sum = 0;
    for(int i = 0; i< length; i++)
        sum = sum + A[i];
    return sum;
}

int Array::sum(int n)
{
    int sum = 0;
    for(int i = 0; i< n; i++)
        sum = sum + A[i];
    return sum;
}

int Array::avg()
{
    return sum()/length;
}

void Array::reverse()
{
    int temp, i = 0, j = length - 1;
    while(j>i)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
}

Array::~Array()
{
    cout<<"destructor called";
    delete []A;
}

int main()
{
    int sz,x,index;
    cout<<"Enter size of array : ";
    cin>>sz;
    Array arr(sz);
    arr.create();
    cout<<"Enter index you want to enter the number at : ";
    cin>>index;
    //cout<<"Insert the number : ";
   // cin>>x;
    //arr.append(x);
    //arr.insert(index, x);
    x=arr.remove(index);
    cout<<x<<" is deleted"<<endl;
    arr.display();
    return 0;
}