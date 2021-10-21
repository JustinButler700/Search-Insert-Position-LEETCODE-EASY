#Justin Butler 10/21/2021
#Basic implementation of binary searches. 
#Runtime: 36 ms, faster than 68.46% of Python online submissions for Search Insert Position.
#Memory Usage: 14.2 MB, less than 26.41% of Python online submissions for Search Insert Position.
class Solution(object):
    def searchInsert(self, nums, target):
        left = 0
        right = len(nums)-1
        
        while left <= right:
            mid = left + (right - left)/2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid+1
            else:
                right = mid-1
        return left
        
