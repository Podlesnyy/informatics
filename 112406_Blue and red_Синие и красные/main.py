def f(value, cnt):
    text_in=value
    text_out=''
    flag=False
    cnt1=0
    for obj in text_in:
        if obj == 'B' and not flag:
            text_out+=obj
        elif obj == 'R':
            flag = True
            text_out+=obj
    print(text_out)
    for i in text_out:
        if i=='B':
            cnt1+=1
    print(cnt-cnt1)
value=input()
cnt=0
for i in value:
    if i=='B':
        cnt+=1
f(value, cnt)