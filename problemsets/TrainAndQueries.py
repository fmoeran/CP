def solve():
    n, k = list(map(int, input().split()))
    u = list(map(int, input().split()))
    m = {}
    for ind, num in enumerate(u):
        if not m.get(num):
            m[num] = [ind, ind]
        else:
            m[num][1] = ind
    for _ in range(k):
        a, b = list(map(int, input().split()))

        if not m.get(a) or not m.get(b):
            print("NO")
        elif m[a][0] > m[b][1]:
            print("NO")
        else:
            print("YES")


t = int(input())
for _ in range(t):
    solve()
