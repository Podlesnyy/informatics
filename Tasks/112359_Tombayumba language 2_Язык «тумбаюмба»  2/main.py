from itertools import product
def filt(elment, first_aphabet):
    count_filt=0
    for symbol in element:
        if symbol==first_aphabet:
            count_filt+=1
    if count_filt>1:
        return True
    else:
        return False
alphabet = input()
k = int(input())
arr = product(alphabet, repeat=k)
count_filtered_elements=0
for element in arr:
    if filt(element, alphabet[0]):
        print(*element, sep='')
        count_filtered_elements+=1
print(count_filtered_elements)