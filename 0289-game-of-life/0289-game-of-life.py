from typing import List
import copy

class Solution:
    def neighbor(self, grid, row, col):
        try:
            return grid[row][col] == 1
        except IndexError:
            return 0

    def gameOfLife(self, cells: List[List[int]]) -> None:
        x = copy.deepcopy(cells)
        r = [-1, 0, 1]
        
        for i in range(len(cells)):
            for j in range(len(cells[0])):
                n = 0
                for row in r:
                    for col in r:
                        if row == 0 and col == 0:
                            continue
                        if 0 <= i + row < len(cells) and 0 <= j + col < len(cells[0]):
                            n += self.neighbor(cells, i + row, j + col)
                
                if cells[i][j] == 1 and (n < 2 or n > 3):
                    x[i][j] = 0
                if cells[i][j] == 0 and n == 3:
                    x[i][j] = 1
        
        for i in range(len(cells)):
            cells[i] = x[i]
