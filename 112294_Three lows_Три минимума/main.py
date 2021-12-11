N=int(input())
lst=[int(X) for X in input().split()]
lst.sort()
for i in range(0,3):
    print(lst[i],end=" ")