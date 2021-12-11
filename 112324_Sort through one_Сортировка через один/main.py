n = int(input())
a = list(map(int,input().split()))
e=[]
o=[]
result=[]
for i in range(n):
    if i%2==0:
        e.append(a[i])
e.sort()
for i in range(n):
    if i%2!=0:
        o.append(a[i])
for i in range(n//2):
    result.append(e[i])
    result.append(o[i])

if len(a) % 2 != 0:
    result.append(e[i+1])
print(*result)