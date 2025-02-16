class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        check=[]
        for i in matrix:check.append(i)
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                if matrix[i][j]==0 and check[i][j]==0:
                    matrix[i]=[0 for i in range(0,len(matrix[i]))]
        print(check)
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                if matrix[i][j]==0 and check[i][j]==0:
                    for k in range(0,len(matrix)):
                        matrix[k][j]=0
        print(check)
                    