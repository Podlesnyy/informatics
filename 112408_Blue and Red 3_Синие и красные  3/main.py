S=input()
n=len(S)
idxB=[i for i in range(n) if S[i]=='B']
idxR=[i for i in range(n) if S[i]=='R']
rem_points=[i for i in list(zip(idxR, idxB[::-1])) if i[0]<i[1]]
print('B'*(len(idxB)-len(rem_points))+'R'*(len(idxR)-len(rem_points)))
print(2*len(rem_points))