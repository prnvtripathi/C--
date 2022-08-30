//template class
#include<iostream>
using namespace std;

template <class t> class arithmatic
{
    private:
    t a;
    t b;

    public:
    arithmatic(t a, t b);
    t add();
    t sub();
};
template<class t> arithmatic<t> :: arithmatic(t a, t b)
{
    this->a=a;
    this->b=b;
}
template<class t> t arithmatic<t> :: add()
{
    return a+b;
}
template<class t> t arithmatic<t> :: sub()
{
    return a-b;
}

int main()
{
    arithmatic<int> r(10,5);
    cout<<r.add()<<endl;
    cout<<r.sub()<<endl;
    return 0;
}