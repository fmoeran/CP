def solve():
    n = int(input())
    a = list(input())
    difs = []
    current = 0
    for i, p in enumerate(a):
        if p == "L":
            c = i
        else:
            c = n-1-i
        current += c
        m = max(i, n-1-i)
        difs.append(m-c)
    difs = sorted(difs, reverse=True)
    for dif in difs:
        current += dif
        print(current, end=" ")
    print()




for _ in range(int(input())):
    solve()