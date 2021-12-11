from random import randint
k=0
c=0
m=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    k+=lst[i]
print('')
c=k/n
print('{:.3f}'.format(c))