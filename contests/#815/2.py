def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s1, s2, l1, l2 = float("inf"),float("inf"),float("-inf"),float("-inf")
    for num in a:

        if num <= s1:
            s1, s2 = num, s1
        elif num <= s2:
            s2 = num
        if num >= l1:
            l1, l2 = num, l1
        elif num >= l2:
            l2 = num
    return l1+l2-s1-s2






t = int(input())

for _ in range(t):
    print(solve())