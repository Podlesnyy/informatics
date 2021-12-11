n = int(input())
sp = list(map(int, input().split()))
fl = True
f = True
while fl:
    fl = False
    for i in range(n-1):
        i1 = i+1
        if sp[i] > sp[i1]:
            sp[i], sp[i1] = sp[i1], sp[i]
            fl = True
            f = False
            print(*sp)
if f:
    print(0)