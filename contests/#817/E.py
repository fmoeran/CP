def solve():
    n, q = map(int, input().split())
    a = []
    for _ in range(n):
        h, w = map(int, input().split())
        a.append((h, w))
    h = sorted(a, key = lambda x: x[0])
    w = sorted(a, key = lambda x: x[1])
    for _ in range(q):
        hs, ws, hb, wb = map(int, input().split())
        p1, p2, p3, p4 = n, n, n, n


        left, right = 0, n-1
        while left+1 < right:
            mid = (left+right)//2
            if hs < h[mid][0]:
                right = mid
            else:
                left = mid
        if hs < h[left][0]:
            p1 = left
        else:
            p1 = right


        left, right = 0, n - 1
        while left + 1 < right:
            mid = (left + right) // 2
            if h[mid][0] < hb:
                left = mid
            else:
                right = mid
        if h[right][0] < hb:
            p2 = right
        else:
            p2 = left



        left, right = 0, n - 1
        while left + 1 < right:
            mid = (left + right) // 2
            if ws < w[mid][1]:
                right = mid
            else:
                left = mid
        if ws < w[left][1]:
            p3 = left
        else:
            p3 = right

        left, right = 0, n - 1
        while left + 1 < right:
            mid = (left + right) // 2
            if w[mid][1] < wb:
                left = mid
            else:
                right = mid
        if w[right][1] < wb:
            p4 = right
        else:
            p4 = left





        t = 0
        heights = h[p1:p2+1]
        widths = set(w[p3:p4+1])
        for pair in heights:
            if pair in widths:
                t += pair[0]*pair[1]
        print(t)



for _ in range(int(input())):
    solve()