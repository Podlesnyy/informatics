from random import randint
k=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if ((abs(lst[i]))//10%10)%2==0:
        k=k+1
print('')
print(k)