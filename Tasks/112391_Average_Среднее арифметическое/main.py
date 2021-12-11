count=0
sum=0
Fout = open("output.txt", "w")
with open("input.txt") as Fin:
	for s in Fin:
		count+=1
		sum+=int(s)
Fout.write(str(round(sum/count, 3)))