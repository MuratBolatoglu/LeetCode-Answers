class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if strs==[""] :return [[""]]
        lst=[''.join(sorted(i)) for i in strs]
        control=list(set(lst))
        if len(control)==0:return []
        ans=[[] for i in range(len(control))]
        for i in range(0,len(strs)):
            if lst[i] in control:ans[control.index(lst[i])].append(strs[i])
        return ans

        
