N=int(input())
lst=[int(X) for X in input().split()]
w = 0
X=int(input())
for i in range(N):
    if lst[i]==X:
        w=1
        print(i+1,end=' ')
if w==0:
    print(-1)