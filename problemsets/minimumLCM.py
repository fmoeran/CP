

def gcd(a, b):
    if a%b == 0:
        return b
    else:
        return gcd(b, a%b)


t = int(input())


for _ in range(t):
    n = int(input())
    m = float("inf")
    pair = []
    for a in range(1, n):
        b = n-a
        lcm = a * b // gcd(a, b)
        if lcm < m:
            m = lcm
            pair = (a, b)
    print(pair[0], pair[1])

