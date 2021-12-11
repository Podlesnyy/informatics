file = input()

expansion = input()

if '.' not in file:

   print(file + '.' + expansion)

else:

   i = -1

   while file[i] != '.':

       file = file[0:i]

   print(file + expansion)