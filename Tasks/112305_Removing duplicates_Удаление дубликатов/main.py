def Ripit(l):
    n = []
    for i in l:
        if i not in n:
            n.append(i)
    return n

def Nuls(l, a):
    for i  in range(len(a)):
        if a[i] == 0:
            a.pop(i)
            a.append(0)

    for i in l:
        if len(a)<len(l):
            a.append(0)
    return a

N=int(input())
l=[int(X) for X in input().split()]
a=[]
a=Ripit(l)
b=[]
b=Nuls(l, a)
print(*b)