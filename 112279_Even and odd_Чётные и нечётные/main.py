from random import randint
k=0
c=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if (lst[i]%2==0):
        k=k+1
    if (lst[i]%2!=0):
        c=c+1
print('')
print(k)
print(c)