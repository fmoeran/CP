from math import ceil
n, m, a = input().split()
print(ceil(int(n)/int(a))*ceil(int(m)/int(a)))