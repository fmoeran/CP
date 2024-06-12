def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    evens = []
    odds = []
    for i in a:
        if i%2 == 0:
            evens.append(i)
        else:
            odds.append(i)
    if sum(evens) > sum(odds):
        print("YES")
    else:
        print("NO")





for _ in range(int(input())):
    solve()