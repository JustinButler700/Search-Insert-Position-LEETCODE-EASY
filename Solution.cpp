//Justin Butler 10/21/2021
/*
Runtime: 4 ms, faster than 80.99% of C++ online submissions for Search Insert Position.
Memory Usage: 9.8 MB, less than 12.66% of C++ online submissions for Search Insert Position.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                left = mid +1;
            }
            else
            {
                right = mid-1;
            }
        }
        return left;
    }
};
