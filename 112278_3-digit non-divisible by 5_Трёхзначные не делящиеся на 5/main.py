from random import randint
k=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if (lst[i]>=100 and lst[i]<=999 and lst[i]%5!=0 and lst[i]>=0):
        k=k+1
print('')
print(k)