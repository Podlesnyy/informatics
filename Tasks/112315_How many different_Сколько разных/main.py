from collections import Counter
n=int(input()) 
a = list(map(int, input().split()))
a = sorted(a)
c = Counter(a)
count=0
print(*a)
Unic = set()
for i in range(n):
    Unic.add(a[i])
print(len(Unic))