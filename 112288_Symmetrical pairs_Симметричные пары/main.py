from random import randint

a, b, n = map(int, input().split())

random_list = [randint(a, b) for i in range(n)]
list_symmetric_sum = []

for i in range(n // 2):
    summa = random_list[i] + random_list[n - i - 1]
    if summa % 2 == 0:
        list_symmetric_sum.append((i, summa))

if len(list_symmetric_sum) == 0:
    print(0, 0)
else:
    sorted_list = sorted(list_symmetric_sum, key=lambda item: (item[1], item[0]))

index = sorted_list[-1][0]

print(*random_list)
print(index+1, n - index)