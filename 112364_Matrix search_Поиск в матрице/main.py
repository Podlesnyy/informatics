N, M = [int(i) for i in input().split()]
A = []

for i in range(N):

   A.append([int(j) for j in input().split()])
K=int(input())
s = 0

for i in range(N):

  for j in range(M):
      if(K==A[i][j]):
          s+=1
print(s)