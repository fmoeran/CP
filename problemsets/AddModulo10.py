def sol():
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1):
        if not two_can(a[i], a[i+1]):
            return False
    else:
        return True


def two_can(a, b):
    while abs(a-b) >= 10:
        if a %10 == 0 or b%10 == 0:
            return False
        if a < b:
            a += a%10
        else:
            b += b%10

    seena = {a%10}
    seenb = {b%10}

    while a != b:
        if a < b:
            a += a%10
            if a%10 in seena:
                return False
            seena.add(a%10)
        else:
            b += b%10#
            if b%10 in seenb:
                return False
            seenb.add(b%10)
    return True



t = int(input())

for _ in range(t):
    if sol():
        print("YES")
    else:
        print("NO")