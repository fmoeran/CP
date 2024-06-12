def solve():
    a, b, c, d = list(map(int, input().split()))
    a *= d
    c *= b
    if a == c:
        print(0)
    elif a == 0 or c == 0 or a%c == 0 or c%a == 0:
        print(1)
    else:
        print(2)



t = int(input())
for _ in range(t):
    solve()