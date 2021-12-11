from itertools import product
s = input()
k = int(input())
arr = product(s, repeat=k)
count_filtered_elements=0
for element in arr:
    if element[1] == s[0]:
        print(*element, sep='')
        count_filtered_elements+=1
print(count_filtered_elements)