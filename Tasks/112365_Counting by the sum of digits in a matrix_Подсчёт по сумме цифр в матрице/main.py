def numDigits(n): 
    return len(list(filter(lambda m:m.isdigit(), str(n))))
def sumDigits(n):
    suma = 0
    while n > 0:
        digit = n % 10
        suma = suma + digit
        n = n // 10
    return suma
N, M = [int(i) for i in input().split()]
A = []
for i in range(N):

   A.append([int(j) for j in input().split()])
K=int(input())
R=int(input())
s = 0

for i in range(N):

  for j in range(M):
      if(numDigits(A[i][j])==K and sumDigits(A[i][j])%R==0):
          s += 1
print(s)