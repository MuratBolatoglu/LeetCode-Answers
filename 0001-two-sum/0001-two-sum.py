class Solution(object):
    def twoSum(self, nums, target):
        prev={}
        for i , n in enumerate(nums):
            diff=target-n
            if diff in prev:
                return [prev[diff],i]
            prev[n]=i
        