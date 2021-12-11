s = input("")
s1 = ""
count=0
for i in range(0,len(s)):
    if s[i] == "a": 
        s1 = s1+"b"
        count+=1
    elif s[i] == "A": 
        s1 = s1+"B"
        count+=1
    else: 
        s1 = s1+s[i]
print(s1)
print(count)