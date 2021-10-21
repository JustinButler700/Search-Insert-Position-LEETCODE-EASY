//Justin Butler 10/21/2021
/*
Beats 100% of Java Submissions
Runtime: 0 ms
Memory Usage: 38.7 MB
*/
class Solution {
    public int searchInsert(int[] nums, int target) 
    {
        if(target <= nums[0] || nums.length ==0){return 0;}
        int low = 0, high = nums.length-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                low = mid +1;
            }
            else
            {
                high = mid -1;
            }
        }
        return low;
    }
}
