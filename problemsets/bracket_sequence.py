brackets = input()
longest = 0
count = 1
open = 0
closed = 0
for bracket in brackets:
    if bracket == "(":
        open += 1
    if bracket == ")":
        closed += 1
    if closed > open:
        closed, open = 0, 0
    elif closed == open:
        total = closed+open
        if total == longest:
            count += 1
        elif total > longest:
            longest = total
            count = 1
    elif closed < open and closed > 0:
        total = closed*2
        if total == longest:
            count += 1
        elif total > longest:
            longest = total
            count = 1

print(longest, count)