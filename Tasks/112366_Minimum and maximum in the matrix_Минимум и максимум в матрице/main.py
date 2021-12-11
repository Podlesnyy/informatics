N, M = [int(i) for i in input().split()]
A = []
for i in range(N):
   A.append([int(j) for j in input().split()])
minimum = 1, 1, A[0][0]
maximum = 1, 1, A[0][0]
 
for i, line in enumerate(A):
    for j, element in enumerate(line):
        if element > maximum[2]:
            maximum = (i+1, j+1, element)
        elif element < minimum[2]:
            minimum = (i+1, j+1, element)
 
print(*minimum, *maximum, sep="\n")