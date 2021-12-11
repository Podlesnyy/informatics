a, b, c = [int(i) for i in input().split()]
print(a,'+',b,'+',c,'=',a+b+c, sep='')
print(a,'*',b,'*',c,'=',a*b*c, sep='')
z = (a+b+c)/3
z = round(z,3)
print('(',a,'+',b,'+',c,')/3=', '{:.3f}'.format(z), sep='')