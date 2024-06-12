n = int(input())
ls = []
for i in range(n):
    ls.append(input())

for word in ls:
    if len(word) <= 10:
        print(word)
        continue
    print(word[0]+str(len(word)-2)+word[-1])
