k, m, b = map(int, input().split())
a = []
for i in range(int(input())):
    sname, name, year, balls = input().split()
    if k <= int(year) <= m and int(balls) == b:
        a.append(sname + ' ' + name)
print(*a, sep = '\n')
print(len(a))