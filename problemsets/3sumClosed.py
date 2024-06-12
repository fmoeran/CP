def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s = {}
    for num in a:
        s[num] = s.get(num, 0) + 1
    a = sorted(a, reverse=True)
    print(a)
    for i in range(n):
        for j in range(i+1, n):
            dif = a[i]-a[j]

    print("YES")



for _ in range(int(input())):
    solve()