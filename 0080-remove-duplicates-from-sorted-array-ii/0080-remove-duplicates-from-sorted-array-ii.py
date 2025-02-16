class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        k=0
        first=[]
        second=[]
        for i in range(0,len(nums)):
            if nums[i] not in first:
                nums[k]=nums[i]
                k+=1
                first.append(nums[i])
            elif nums[i] not in second:
                nums[k]=nums[i]
                k+=1
                second.append(nums[i])
        return k         
