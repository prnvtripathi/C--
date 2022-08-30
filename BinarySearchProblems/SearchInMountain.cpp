//https://leetcode.com/problems/find-in-mountain-array/
int findInMountainArray(int target, MountainArray arr) {
 int l = 0;
        int h = arr.size() - 1;
        int mid;

    while(l < h)
    {
        mid = l + (h-l)/2;
        if (arr[mid] > arr[mid+1])
            h = mid;
        else if (arr[mid] < arr[mid+1])
            l = mid + 1;
    }
    //peak element is found at index = l
    int a=0, b=l;
    int m;
    //search in left side
    while(a<=b)
    {
        m = a + (b-a)/2;
        if (target==arr[m])
            return m;
        else if (target < arr[m])
            b = m - 1;
        else
            l = m + 1;
    }
    //search in right side
    a = l+1; b=arr.length() - 1;
    while(a <= b)
    {
        m = a + (b-a)/2;
        if (target==arr[m])
            return m;
        else if (target < arr[m])
            b = m - 1;
        else
            l = m + 1;
    }
    return -1;

}