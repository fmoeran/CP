def solve():
    n, m, x, y, d = map(int, input().split())
    if (x+d >=n and x-d <= 1) or (y+d >=m and y-d <= 1) or (abs(n-x)+abs(m-y) <= d):
        print(-1)
    else:
        print(n+m-2)


for _ in range(int(input())):
    solve()