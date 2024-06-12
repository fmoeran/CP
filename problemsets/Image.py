def solve():
    a, b = list(input())
    c, d = list(input())
    nums = {a, b, c, d}
    print(len(nums)-1)


for _ in range(int(input())):
    solve()