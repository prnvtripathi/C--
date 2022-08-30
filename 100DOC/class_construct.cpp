//class (constructor)
#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:
    rectangle(){length = breadth = 1;}
    rectangle(int l, int b);
    int area();
    int perimeter();
    int get_length(){return length;}
    int set_length()
    {
        cout<<"Enter length"<<endl;
        cin>>length;
    }
    int get_breadth(){return breadth;}
    int set_breadth()
    {
        cout<<"Enter breadth"<<endl;
        cin>>breadth; 
    }
    ~rectangle();
};

rectangle::rectangle(int l, int b)
{
    length = l;
    breadth =b;
}
int rectangle::area()
{
    return length*breadth;
}
int rectangle::perimeter()
{
    return 2*(length+breadth);
}
rectangle::~rectangle()
{}

int main()
{
    rectangle r;
    r.set_length();
    r.set_breadth();
    cout<<"Area of the rectangle : "<<r.area()<<endl;
    cout<<"Perimeter of the rectangle : "<<r.perimeter()<<endl;
    r.set_breadth();
    cout<<"new area is : "<<r.area()<<endl;
    cout<<"Breadth modified to : "<<r.get_breadth()<<endl;
    return 0;
}