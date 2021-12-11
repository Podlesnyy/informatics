from math import *
 
a = input().split()
s = list()
try:
    for v in a:
        # print(s)
        if v.isdigit():
            s.append(float(v))
        else:
            if (v == 'abs'):
                s.append(abs(s.pop()))
            elif (v == 'sin'):
                s.append(sin(s.pop()))
            elif (v == 'cos'):
                s.append(cos(s.pop()))
            elif (v == 'sqrt'):
                s.append(sqrt(s.pop()))
            elif (v == '+'):
                s.append(s.pop() + s.pop())
            elif (v == '-'):
                (x, y) = s.pop(), s.pop()
                s.append(y - x)
            elif (v == '/'):
                s.append(1 / (s.pop() / s.pop()))
            elif (v == '*'):
                s.append(s.pop() * s.pop())
            else:
                raise ValueError
    if len(s) != 1:
        raise ValueError
    print(f"{s.pop():0.03f}")
except:
    print('ERROR')