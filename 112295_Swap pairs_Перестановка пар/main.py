N=int(input())
lst=[int(X) for X in input().split()]

for i in range(0, N -1 , 2):
    lst[i], lst[i+1] = lst[i+1], lst[i]

for i in range(N):
    print(lst[i], end=' ')