class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        mult=1
        count=0
        num1=[*num1]
        num2=int(num2)
        for i in range(len(num1)-1,-1,-1):
            count+=int(num1[i])*num2*mult
            mult*=10
        return str(count)