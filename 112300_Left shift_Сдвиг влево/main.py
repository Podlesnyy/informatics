def shift(lst, steps):
    if steps < 0:
        steps = abs(steps)
        for i in range(steps):
            lst.append(lst.pop(0))
    else:
        for i in range(steps):
            lst.insert(0, lst.pop())


N=int(input())
nums=[int(X) for X in input().split()]
steps=int(input())
steps=steps*(-1)

shift(nums, steps)
print(*nums)