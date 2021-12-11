from random import randint
def Sum(n):
    suma=0
    while n > 0:
        digit = n % 10
        suma = suma + digit
        n = n // 10
    return suma
k=0
x,y,n,g=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n):
    print(lst[i],end=' ')
    if(Sum(lst[i])==g):
       k+=1
print('')
print(k)