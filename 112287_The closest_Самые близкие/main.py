from random import randint

a, b, n = map(int, input().split())

random_list = [(i, randint(a, b)) for i in range(n)]
sorted_list = list(sorted(random_list, key=lambda item: item[1]))

subtraction_list = []
for i in range(n - 1):
    first_value = sorted_list[i][1]
    first_index = sorted_list[i][0]
    second_value = sorted_list[i + 1][1]
    second_index = sorted_list[i + 1][0]
    if first_index < second_index:
        min_index = first_index
        max_index = second_index
    else:
        max_index = first_index
        min_index = second_index
    subtraction_list.append((min_index, max_index, second_value - first_value))

sorted_subtraction_list = list(sorted(subtraction_list, key=lambda item: (item[2], n - item[0])))

for i in range(n):
    print(random_list[i][1], end=' ')
print(end='\n')
print(sorted_subtraction_list[0][0] + 1, sorted_subtraction_list[0][1] + 1)