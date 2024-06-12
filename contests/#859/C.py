def get_ind(char):
    return ord(char) - ord("a")

def solve():
    ones = [False for _ in range(26)]
    zeros = [False for _ in range(26)]
    n = int(input())
    s = input()
    if n == 1:
        print("YES")
        return
    zeros[ord(s[0])-ord("a")] = True
    for i in range(1, n-1):
        ind = ord(s[i])-ord("a")
        if not ones[ind] and not zeros[ind]:

            if ones[get_ind(s[i-1])]:
                zeros[ind] = True
            else:
                ones[ind] = True

        if (ones[ind] and ones[get_ind(s[i-1])]) or (zeros[ind] and zeros[get_ind(s[i-1])]):
            print("NO")
            return
        if (ones[ind] and ones[get_ind(s[i+1])]) or (zeros[ind] and zeros[get_ind(s[i+1])]):
            print("NO")
            return

    if (ones[get_ind(s[-1])] and ones[get_ind(s[-2])]) or (zeros[get_ind(s[-1])] and zeros[get_ind(s[-2])]):
        print("NO")
        return
    print("YES")






for _ in range(int(input())):
    solve()