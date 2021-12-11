n = int(input())
s = 0
k = 0
flag = 0
while n != -2000000000:
  p = n
  n = int(input())
  if n == -2000000000:
    break
  k += 1
  if p == n:
    s += 1
  elif p > n:
    if flag == 2:
      print("RANDOM")
      exit(0)
    flag = 1
    s += 0
  else:
    if flag == 1:
      print("RANDOM")
      exit(0)
    flag = 2
    s += 2
if k != 0:
  sr = s/k
  if 0 < sr < 1:
    print("WEAKLY DESCENDING")
  elif sr == 0:
    print("DESCENDING")
  elif sr == 1:
    print("CONSTANT")
  elif sr == 2:
    print("ASCENDING")
  else:
    print("WEAKLY ASCENDING")
else:
  print("RANDOM")