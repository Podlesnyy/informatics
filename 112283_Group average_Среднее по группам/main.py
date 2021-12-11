from random import randint
k=0
c=0
m=0
e=0
a=0
b=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if(lst[i]<50):
       k+=lst[i]
       a+=1
    else:
        m+=lst[i]
        b+=1
if(a==0):
    c=0
else:
    c=k/a
if(b==0):
    e=0
else:
    e=m/b
print('')
print('{:.3f}'.format(c), '{:.3f}'.format(e))