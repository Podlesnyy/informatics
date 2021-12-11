def group_numbers(numbers):
    list_group_numbers = []

    prev_number = numbers[0]
    prev_number_count = 1
    for i in range(1, len(numbers)):
        if numbers[i] == prev_number:
            prev_number_count += 1
        else:
            list_group_numbers.append((prev_number, prev_number_count))
            prev_number = numbers[i]
            prev_number_count = 1

    list_group_numbers.append((prev_number, prev_number_count))
    return list_group_numbers


def find_max_count(list_group_numbers):
    max_count = -1
    for i in range(len(list_group_numbers)):
        number, number_count = list_group_numbers[i]
        if number_count > max_count:
            max_count = number_count
    return max_count


def find_first_element_by_count(list_group_numbers, count):
    for i in range(len(list_group_numbers)):
        number, number_count = list_group_numbers[i]
        if number_count == count:
            return list_group_numbers[i]


def run():
    n = int(input())
    numbers = [int(i) for i in input().split()]
    list_group_numbers = group_numbers(numbers)
    max_count = find_max_count(list_group_numbers)
    result = find_first_element_by_count(list_group_numbers, max_count)
    print(*result)


if __name__ == '__main__':
    run()