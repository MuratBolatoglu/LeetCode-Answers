class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        ans=[]
        if target not in nums:return [-1,-1]
        for i in range(0,len(nums)):
            if nums[i]==target:
                ans.append(i)
                break
        for i in range(len(nums)-1,-1,-1):
            if nums[i]==target:
                ans.append(i)
                break
        return ans
