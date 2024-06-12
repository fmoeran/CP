def solve():
    n, m = list(map(int, input().split()))
    matrix = [list(map(int, list(input()))) for i in range(n)]
    one_count = 0
    for row in matrix:
        #print(row)
        one_count += row.count(1)

    # find zero pairs
    for row in matrix: #rows
        for i in range(len(row)-1):
            if row[i] == 0 and row[i+1] == 0:
                return one_count
    for col in range(len(matrix[0])):
        for row in range(len(matrix)-1):
            if matrix[row][col] == 0 and matrix[row+1][col] == 0:
                return one_count


    #search for a 1 neighboured y two zeroes
    for row in range(n):
        for col in range(m):
            if matrix[row][col] == 1:
                if 0<=row+1<n:
                    if 0<=col+1<m:
                        if matrix[row+1][col] == 0 and matrix[row][col+1] == 0:
                            return one_count
                    if 0<=col-1<m:
                        if matrix[row+1][col] == 0 and matrix[row][col-1] == 0:
                            return one_count
                if 0<=row-1<n:
                    if 0 <= col + 1 < m:
                        if matrix[row -1][col] == 0 and matrix[row][col + 1] == 0:
                            return one_count
                    if 0 <= col - 1 < m:
                        if matrix[row -1][col] == 0 and matrix[row][col - 1] == 0:
                            return one_count




    # check for any zeroes
    for row in matrix:
        if 0 in row:
            return one_count -1
    return one_count - 2



t = int(input())
for _ in range(t):
    print(solve())