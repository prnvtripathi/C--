#include <stdio.h>

void fun1(int a)
{
    if (a > 0)
    {
        printf("%d\n", a);
        fun2(a - 1);
    }
}

void fun2(int b)
{
    if (b > 0)
    {
        printf("%d\n", b);
        fun1(b - 3);
    }
}

int main()
{
    int v = 12;
    fun1(v);
}