def solve():
    n = int(input())
    name = sorted(list("Timur"))

    word = sorted(list(input()))
    if word == name:
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    solve()