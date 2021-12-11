min=100000000000
max=-1000000000000000
Fout = open("output.txt", "w")
with open("input.txt") as Fin:
	for s in Fin:
		if int(s)%2==0 and int(s)>0:
			if int(s)<min:
				min=int(s)
			if int(s)>max:
				max=int(s)
if max != -100000000000000 and min!=100000000000:
	Fout.write(f"{min} {max}")
else:
	Fout.write("0")