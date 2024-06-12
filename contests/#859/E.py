from sys import stdout
def solve():
    n = int(input())
    a = [int(i) for i in input().split()]
    sums = [0]
    for num in a:
        sums.append(sums[-1] + num)
    left, right = 0, n
    while left < right:
        mid = (left + right)//2
        out = [str(i+1) for i in range(left, mid+1)]

        print("?", len(out), " ".join(out))

        stdout.flush()
        inp = int(input())
        desired = sums[mid+1] - sums[left]
        if inp == desired:
            left = mid + 1
        else:
            right = mid

    print("!", left+1)





for _ in range(int(input())):
    solve()