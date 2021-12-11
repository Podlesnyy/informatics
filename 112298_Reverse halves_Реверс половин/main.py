N=int(input())
a=[int(X) for X in input().split()]
print(*(a[:len(a)//2][::-1]+a[len(a)//2:][::-1]))