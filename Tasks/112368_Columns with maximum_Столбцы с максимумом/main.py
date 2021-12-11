n, m =map(int, input().split())
 
matrix =[input().split() for _ in range(n)]
max_item = str(max([int(i) for item in matrix for i in item]))
max_cols = [x for x in [[matrix[j][i] for j in range(n)] for i in range(m)] if max_item in x]
print(*[' '.join(col) for col in max_cols], sep='\n')