def sol():
    n = int(input())
    a = list(map(int, input().split()))
    zeroes = set()
    changes = 0
    current_min = a[-1]
    while True:
        original_changes = changes
        for i in range(n-2, -1, -1):
            num = a[i]
            if num > current_min and num not in zeroes:
                changes += 1
                current_min = 0
                zeroes.add(num)
            elif num < current_min:
                current_min = num
        if original_changes == changes:
            break
    print(changes)





t = int(input())
for _ in range(t):
    sol()
