def solve():
    n, x = list(map(int, input().split()))
    a = list(map(int, input().split()))
    mini, maxi = a[0]-x, a[0] + x
    changes = 0
    for i in range(1, n):
        print(mini, maxi)
        new_mini, new_maxi = a[i]-x, a[i] + x
        if new_mini > maxi or new_maxi < mini:
            changes += 1
            mini, maxi = new_mini, new_maxi
        else:
            if new_mini < maxi:
                mini = new_mini
            if new_maxi > mini:
                maxi = new_maxi
    print(changes)
    
        
    




t = int(input())
for _ in range(t):
    solve()