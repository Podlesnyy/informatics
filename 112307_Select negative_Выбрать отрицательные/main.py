N=int(input())
nums=[int(X) for X in input().split()]
a=[]
for i in range(N):
    if nums[i]<0:
        a.append(nums[i])
if(len(a)==0):
    print(0)
else:
    print(*a)