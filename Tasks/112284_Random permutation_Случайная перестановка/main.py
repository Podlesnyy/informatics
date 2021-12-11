import random
n=int(input())
mas=list()
for i in range (1,n+1):
    mas.append(i)
random.shuffle(mas)
print(*mas)