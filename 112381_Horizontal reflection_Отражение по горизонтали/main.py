N, M = [int(i) for i in input().split()]
A = []

for i in range(N):

   A.append([int(j) for j in input().split()])
for stroka in A:
    stroka.reverse()
    print(*stroka)