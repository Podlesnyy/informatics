n = input()
lst = []
lst2 = []
while len(n.strip()) != 0:
    lst.append(n.split()[1])
    lst2.append(n.split()[0])
    n = input()
 
for i, e in enumerate(sorted(lst)):
    print(i + 1, ". ", lst2[lst.index(e)], " ", e, sep="")