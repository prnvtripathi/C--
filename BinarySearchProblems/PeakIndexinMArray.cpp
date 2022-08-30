//https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include<iostream>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
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
        return ;
}
};