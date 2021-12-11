import math
x, y = [float(i) for i in input().split()] 
if (y<=math.sin(x)) and (x>=0) and (y>=0) and (x<=math.pi) and (y<=0.5):
    print("YES")
else:
    print("NO")