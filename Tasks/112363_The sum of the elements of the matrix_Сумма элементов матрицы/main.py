N, M = [int(i) for i in input().split()]
A = []

for i in range(N):

   A.append([int(j) for j in input().split()])
s = 0
for row in A:

   s += sum(row)

print(s)