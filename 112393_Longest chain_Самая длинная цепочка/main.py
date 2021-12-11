Fin=open("input.txt", "rt")
p=int(Fin.readline())
L=1
max=0
while True:
    s=Fin.readline()
    if not s:
        break
    a=int(s)
    if a==p:
        L+=1
    else:
        if L>max:
            max=L
            max_a = p
        L=1
        p=a
if L > max:
    max=L
    max_a = p
Fin.close();
Fout=open("output.txt", "wt")
Fout.write(str(max))
Fout.close()