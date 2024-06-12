for _ in range(int(input())):
    n = int(input())
    s = set(map(int, input().split()))

    changed = True
    while changed:
        changed = False
        for x in s:
            for y in s:
                if not x > y or x-y in s:
                    continue
                s.add(x-y)
                changed = True
                break
            else:
                continue
            break

    print(len(s))