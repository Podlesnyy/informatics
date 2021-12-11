n=int(input())
if n==1:
    print(1)
else:
    a=[0]*n
    a[0]=1
    a[1]=1
    for i in range (2,len(a)):
        a[i]=a[i-1]+a[i-2]
    for elem in a:
        print(elem, end=" ")