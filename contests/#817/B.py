def solve():
    n = int(input())
    a = list(input())
    b = list(input())
    for pair in zip(a, b):
        if not (pair[0] == pair[1] or ("G" in pair and "B" in pair)):
            print("NO")
            return
    print("YES")



for _ in range(int(input())):
    solve()