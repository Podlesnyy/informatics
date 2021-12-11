n = int(input())
a = list(map(int, input().split()))
k = int(input())
print(*(sorted(x for x in set(a) if a.count(x) == k) or [0]))