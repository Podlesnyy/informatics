import math
def IsPrime(n):
    if n == 1:
        return False

    if n == 2:
        return True

    d = 2
    for i in range(int(math.sqrt(n))):
        if n % d == 0:
            return False
        d += 1
      
    return True

N=int(input())
nums=[int(X) for X in input().split()]
a=[]
for i in range(N):
    if IsPrime(nums[i]):
        a.append(nums[i])
if(len(a)==0):
    print(0)
else:
    print(*a)