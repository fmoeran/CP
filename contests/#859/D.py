def solve():
    n, q = map(int, input().split())
    a = [int(i) for i in input().split()]
    modsum = [0]
    for i in range(n):
        modsum.append((modsum[-1] + a[i])%2)
    totalmod = modsum[-1]
    for _ in range(q):
        l, r, k = map(int, input().split())
        rang = r-l+1
        modrange = (modsum[r]-modsum[l-1])%2
        modnew = (k*rang)%2
        change = (modnew-modrange)%2
        newtotal = (totalmod+change)%2
        if newtotal:
            print("YES")
        else:
            print("NO")






for _ in range(int(input())):
    solve()