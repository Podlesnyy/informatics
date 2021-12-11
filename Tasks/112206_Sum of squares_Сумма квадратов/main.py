a, b = [int(i) for i in input().split()]
if a>b:
    t=a
    a=b
    b=t
s=0
for i in range (a, b+1):
    s=s+i*i
print(s)