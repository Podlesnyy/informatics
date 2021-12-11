def shift(lst, steps, k, m):
    if steps < 0:
        steps = abs(steps)
        for i in range(steps):
            lst.insert(m-1, lst.pop(k-1))
    else:
        for i in range(steps):
             lst.insert(k-1, lst.pop(m-1))
N=int(input())
nums=[int(X) for X in input().split()]
k, m = [int(i) for i in input().split()]
steps=int(input())

shift(nums, steps, k, m)
print(*nums)