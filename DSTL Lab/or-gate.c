#include <stdio.h>

int main()
{
    int a[4] = {1, 0, 1, 0};
    int b[4] = {0, 1, 1, 0};
    int i, or_ans;

    for (i = 0; i < 4; i++)
    {

        or_ans = a[i] || b[i];

        printf("\n %d | %d | %d",
               a[i], b[i], or_ans);
    }
}
