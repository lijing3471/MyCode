import numpy as np

def dfs(grid, r, c):
    grid[r][c] = 0
    nr, nc = len(grid), len(grid[0])
    for x, y in [(r - 1, c), (r + 1, c), (r, c - 1), (r, c + 1)]:
        if 0 <= x < nr and 0 <= y < nc and grid[x][y] == "1":
            dfs(grid, x, y)

def numIslands(grid):
    nr = len(grid)
    if nr == 0:
        return 0
    nc = len(grid[0])

    num_islands = 0
    for r in range(nr):
        for c in range(nc):
            if grid[r][c] == "1":
                num_islands += 1
                dfs(grid, r, c)
    
    return num_islands
inp = input()
#[[0,0,0],[1,1,0],[1,1,0],[0,0,1],[0,0,1],[1,1,0]],6,3
h, w = int(inp[-3]), int(inp[-1])
# xi = np.array(6,3)
data = inp[2:-6].split('],[')
num_data = []
for it in data:
    tmp = it.split(',')
    tmp = [int(x) for x in tmp]
    num_data.append(tmp)
for it in num_data:
    print(it)
res = numIslands(num_data)
print(res)
