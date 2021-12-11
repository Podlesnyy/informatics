n = int(input())
lst = []
for i in range(n):
    lst.append(input().split()[1])
for i, e in enumerate(sorted(lst)):
    print(f'{i + 1}. {e}')