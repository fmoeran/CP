n = int(input())
ls = list(map(lambda x: int(x), input().split()))

if ls[0] % 2 == 0 and ls[-1] %2 == 0:
    even = True
elif ls[0] % 2 and ls[-1] % 2:
    even = False
else:
    if ls[1] % 2 == ls[0] % 2:
        print(len(ls))
    else:
        print(1)
    quit()
for out, num in enumerate(ls, 1):
    if num%2 == even:
        print(out)

