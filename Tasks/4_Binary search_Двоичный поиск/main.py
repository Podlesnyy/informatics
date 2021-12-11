N, M = map(int,input().split())
a = [int(x) for x in input().split()]
list2 = [int(x) for x in input().split()]
for value in list2:
	mid = len(a) // 2
	low = 0
	high = len(a) - 1

	while a[mid] != value and low <= high:
		if value > a[mid]:
			low = mid + 1
		else:
			high = mid - 1
		mid = (low + high) // 2

	if low > high:
		print("NO")
	else:
		print("YES")