def is_magic_square(matrix, S, N):
    return (all(sum(row) == S for row in matrix)
            and all(sum(column) == S for column in zip(*matrix))
            and sum(matrix[i][i] for i in range(N)) == S
            and sum(matrix[i][N-1-i] for i in range(N)) == S
            and set(x for row in matrix for x in row) == set(range(1, N**2 + 1)))
N = int(input())  
try:
    matrix = [list(map(int, input().split())) for _ in range(N)]
except ValueError: 
    print('NO')
else:
    print('YES' if N == 0 or is_magic_square(matrix, sum(matrix[0]), N) else 'NO')