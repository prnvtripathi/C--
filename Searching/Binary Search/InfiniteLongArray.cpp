//https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
#include<iostream>
using namespace std;

int binSearch(int A[], int l, int h, int key)
{   
    int mid;
    while(l<=h)
    {
        mid=l+(h-l)/2;  //mid can be (low bound + high bound)/2
        if(key==A[mid])
            return mid; //ans found at mid
        else if(key<A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;          // ans not found
}

int ans(int A[], int key)
{
    int l = 0,
        h = 1,
        val = A[0];
    while(val<key)
    {
        l = h;
        h = 2*h;        // keep doubling the size of area to find the key
        val = A[h];     // change the val to check for key in the increased region
    }

    return binSearch(A, l, h, key);
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int x = ans(arr, 160);
    if (x==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << x;
    return 0;
}