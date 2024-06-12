n, m = list(map(int, input().split()))
arr = list(map(int, input().split()))
for i in range(n):
    s = 0
    for num in arr[i:]:
        s += num
        if s%m == 0:
            print("YES")
            quit()
print("NO")
