class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        dic={}
        s=s.split(" ")
        if len(pattern) != len(s): return False
        for i in range(0,len(pattern)):
            if pattern[i] not in dic:dic[pattern[i]]=s[i]
            elif pattern[i] in dic and dic[pattern[i]]!=s[i]: return False
        dic.clear()
        for i in range(0,len(pattern)):
            if s[i] not in dic:dic[s[i]]=pattern[i]
            elif s[i] in dic and dic[s[i]]!=pattern[i]: return False
        return True

        