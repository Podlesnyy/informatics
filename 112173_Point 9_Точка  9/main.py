x,y=map(float, input().split())
if x*x+y*y<=1 or (x>=0 and x<=1 and y>=0 and y<=1):
    print('YES')
else:
    print('NO')