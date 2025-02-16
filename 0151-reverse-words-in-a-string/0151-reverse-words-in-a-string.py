class Solution:
    def reverseWords(self, s: str) -> str:
        s=(s.split(" "))
        temp=[]
        for i in s:
            if i!="":temp.append(i)
        s=temp[::-1]
        s=" ".join(s)
        return s