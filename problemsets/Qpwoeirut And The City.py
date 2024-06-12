def solve():
    n = int(input())
    h = list(map(int, input().split()))
    increases = []
    for i in range(1, n-1):
        dif = max(h[i-1], h[i+1])+1-h[i]
        increases.append(max(dif, 0))
    if len(increases) % 2 == 1:
        print(sum(increases[::2]))
        return

    current = sum(increases[::2])
    m = current
    for i in range(n-3, 0, -2):
        current += increases[i]
        current -= increases[i-1]
        m = min(m, current)
    print(m)






t = int(input())
for _ in range(t):
    solve()