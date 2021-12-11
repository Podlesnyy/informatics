s=input()
output=''
cnt=0
for i in s:
    if i=='a':
        cnt+=1
        output+='b'
    else:
        output+=i
print(output)
print(cnt)