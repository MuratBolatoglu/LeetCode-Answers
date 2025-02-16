class Solution:
    def maxArea(self, height: List[int]) -> int:
        ans,i,j=0,0,len(height)-1
        while i<j:
            contain=(j-i)*min(height[i],height[j])
            ans=max(ans,contain)
            if height[i]<height[j]:i+=1
            elif height[j]<height[i]:j-=1
            else: i+=1
        return ans