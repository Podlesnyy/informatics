a=input()
b=len(a)
c=0
d=0
for c in a:
    if c*b in a:
        d=1
if d ==1:
    print("YES")
else:
    print("NO")