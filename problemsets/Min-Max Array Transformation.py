def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    mini, maxi = 0, 0
    mins, maxs = [], []
    for i in range(n-1, -1, -1):



        if b[mini] < a[i]:
            left, right = mini, n - 1
            if b[-2] < a[i]:
                mini = n - 1
            while left+1 < right:
                mid = (left + right) // 2
                if b[mid] < a[i]:
                    left = mid
                else:
                    right = mid
            if b[left] >= a[i]:
                mini = left
            else:
                mini = left+1

        mins.append(b[mini]-a[i])

        if b[mini] < a[i]:
            left, right = mini, n - 1
            if b[-2] < a[i]:
                mini = n - 1
            while left+1 < right:
                mid = (left + right) // 2
                if b[mid] < a[i]:
                    left = mid
                else:
                    right = mid
            if b[left] >= a[i]:
                mini = left
            else:
                mini = left+1

        mins.append(b[mini]-a[i])


        maxs.append(b[maxi]-a[i])
    print(mins[::-1])
    print(maxs[::-1])




for _ in range(int(input())):
    solve()