//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
/* algorithm
- set i = 0, j = nums.size() - 1
- set leftIndex and rightIndex to -1

- loop while i <= j
  - set mid = i + (j - i)/2

  - if nums[mid] > target
    - set j = mid - 1
  - else if nums[mid] < target
    - set i = mid + 1
  - else
    - leftIndex = mid
    - set j = mid - 1

- set i = 0, j = nums.size() - 1

- loop while i <= j
  - set mid = i + (j - i)/2

  - if nums[mid] > target
    - set j = mid - 1
  - else if nums[mid] < target
    - set i = mid + 1
  - else
    - rightIndex = mid
    - set i = mid + 1

- return [leftIndex, rightIndex]
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1;
        int Lindex = -1, Rindex = -1;
        
        while(l<=h)
        {
            int mid = l+ (h-l)/2;

            if(nums[mid]>target)
                h = mid - 1;
            else if (nums[mid]<target)
                l = mid + 1;
            else
            {
                Lindex = mid;
                h = mid - 1;
            }
        }
        
        l = 0; h = nums.size() - 1;
        while(l <= h)
        {
            int mid = l + (h-l)/2;

            if(nums[mid] > target)
                h = mid - 1;
            else if (nums[mid] < target)
                l = mid + 1;
            else 
            {
                Rindex = mid;
                l = mid + 1;
            }
        }
        vector<int> ans;
        ans.push_back(Lindex);
        ans.push_back(Rindex);

        return ans;
    }
};