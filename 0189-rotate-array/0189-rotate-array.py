class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        yeni=[0 for i in range(len(nums))]
        k=k%len(nums)
        for i in range(0,len(nums)):
            if i+k>len(nums)-1:yeni[(i+k)%len(nums)]=nums[i]
            else:yeni[i+k]=nums[i]
        for i in range(0,len(nums)):
            nums[i]=yeni[i]