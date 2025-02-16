class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        ans=[None] * len(spells)
        potions.sort()
        for i in range(0,len(spells)):
            ans[i]=len(potions)-bisect_left(potions,success/spells[i])
        return ans