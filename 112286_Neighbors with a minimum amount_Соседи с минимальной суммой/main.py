from random import randint
min_index=0
x,y,n=map(int,input().split())
lst = [randint(x, y) for i in range(n)]
for i in range(n-1):
    if lst[i]+lst[i+1] <= lst[min_index]+lst[min_index+1]:
        min_index=i

print(*lst)
print(min_index+1,min_index+2)