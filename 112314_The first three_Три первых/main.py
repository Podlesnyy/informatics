input()
a = list(map(int, input().split()))
tm = sorted(a)
ar = [str(i) for i in a]
for i in tm[:3]:
    ar.remove(str(i))
print(*(tm[:3] + ar))