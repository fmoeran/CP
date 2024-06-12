def solve():
    n, c, q = map(int, input().split())
    s = list(input())
    for _ in range(c):
        l, r = map(int, input().split())
        s += s[l-1:r]
    for _ in range(q):
        k = int(input())
        print(s[k-1])




for _ in range(int(input())):
    solve()