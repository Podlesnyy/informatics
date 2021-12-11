from random import randint
k=0
c=0
m=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if (lst[i]%2==0):
        if(lst[i]>m):
            m=lst[i]
print('')
if(m<=0):
    print(-1)
else:
    print('')
    print(m)