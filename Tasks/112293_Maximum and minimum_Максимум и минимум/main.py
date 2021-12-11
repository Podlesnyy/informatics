
print(*(lambda _, a: (min(a, default=-1), max(a, default=-1),))(int(input()), list(filter(lambda x: x > 0 and x % 2 == 0, map(int, input().split())))))