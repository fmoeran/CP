def solve():
    n, m = map(int, input().split())
    print(min(m-1, n-1)*2 + max(m-1, n-1) + (max(m-1, n-1) != 0))


for _ in range(int(input())):
    solve()