def solve():
    n, m, x, y, d = map(int, input().split())
    dist = (n-x)+(m-y)
    if dist <= d or ((m-y)<=d and y <= d) or ((n-x)<=d and x <= d):
        print(-1)
    else:
        print(n+m-2)



for _ in range(int(input())):
    solve()