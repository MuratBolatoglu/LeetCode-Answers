import numpy as np
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        d,ans=[],[]
        while matrix:
            d.append(matrix[0])
            matrix=matrix[1:]
            matrix=list(zip(*matrix))[::-1]
        for i in d:
            for j in i:
                ans.append(j)
        return ans
        
        