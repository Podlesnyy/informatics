n,m=map(int,input().split())
A=[]
for i in range(n):
     A.append([int(j) for j in input().split()])
print(*min((r for r in A), key=sum))