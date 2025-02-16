class Solution:
    def greatestLetter(self, s: str) -> str:
        ans=[]
        new=list(set(s.lower()))
        for i in new:
            if i.upper() in s and i in s:ans.append(i)
        if ans==[]: return ""
        return (sorted(ans)[-1]).upper()
