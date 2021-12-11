x,y=map(float, input().split())
if y>=x and y<=2-x*x or y<=x and y>=0 and y<=2-x*x:
    print('YES')
else:
    print('NO')