n = int(input())
a = []
for i in range(n):
  row = input().split()
  for j in range(n): row[j] = int(row[j])
  a.append(row)
m = 0
for i in range(1, n):
  k = 0
  for j in range(i):
    if (a[i][j] == a[j][i]): k = k+1;
  if k == i: m = m+1
if (m == n-1): print('YES')
else: print('NO')