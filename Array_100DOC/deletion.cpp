#include <iostream>
using namespace std;

int main()
{
    int a[10] = {5, 2, 3, 2, 3, 2, 1, 6};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}