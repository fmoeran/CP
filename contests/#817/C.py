def solve():
    words = {}
    n = int(input())
    p = []
    for _ in range(3):
        a = input().split()

        for word in a:
            words[word] = words.get(word, 0) + 1
        p.append(a)
    for a in p:
        t = 0
        for word in a:
            c = words[word]
            if c == 1:
                t += 3
            elif c == 2:
                t += 1

        print(t, end=" ")

    print()


for _ in range(int(input())):
    solve()