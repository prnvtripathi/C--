//structure and functions
#include<iostream>
using namespace std;

class rectangle
{
    private:
    float length;
    float breadth;
    public:
    void initialise(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float area()
    {
        float area;
        area = length*breadth;
        return area;
    }

    float perimeter()
    {
        float perimeter;
        perimeter = 2*(length+breadth);
        return perimeter;
    }
};

int main()
{
    rectangle s;
    float l, b;
    cout<<"Enter length and breadth of rectangle : \n";
    cin>>l>>b;
    s.initialise(l, b);
    cout<<"Area of the rectangle is : "<<s.area()<<endl;
    cout<<"Perimeter of the rectangle is : "<<s.perimeter()<<endl;
    return 0;
}