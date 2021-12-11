from itertools import product
s = input()
k = int(input())
print( '\n'.join(map(''.join, product(s, repeat=k))) )
print(len(s)**k)