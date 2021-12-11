import random
n=int(input())
mas=list()
for i in range (1,n+1):
    mas.append(i)
random.shuffle(mas)
if n >= 5:
    mas.remove(5)
    mas.insert(0, 5)
print(*mas)