N=int(input())
lst=[int(X) for X in input().split()]
w = 100000000
for i in range(N):
    if lst[i]<=w:
        w=lst[i]
for i in range(N):
    if w==lst[i]:
        print(i+1,end=' ')
if w==0:
    print(-1)