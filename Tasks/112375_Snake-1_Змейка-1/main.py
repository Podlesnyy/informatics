n, m = [int(i) for i in input().split()]
for j in range(n):
    print(' '.join([str(i + 1 + m * j) for i in range(m)][::pow(-1, j)]))