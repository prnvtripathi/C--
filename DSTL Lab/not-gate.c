#include <stdio.h>

int main()
{

    int a[2] = {1, 0};
    int i, ans;

    for (i = 0; i < 2; i++)
    {
        ans = !(a[i]);
        printf("\n NOT %d = %d", a[i], ans);
    }
}
