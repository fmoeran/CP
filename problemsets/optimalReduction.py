def sol():
    n = int(input())
    a = list(map(int, input().split()))
    s = sorted(a, reverse=True)
    l, r = 0, n-1
    while l != r:
        q = s.pop()
        if q == a[l]:
            l += 1
        elif q == a[r]:
            r -= 1
        else:
            return False
    return True




t = int(input())

for _ in range(t):
    if sol():
        print("YES")
    else:
        print("NO")