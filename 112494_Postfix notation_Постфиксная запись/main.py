def MathsOp(op, ch1, ch2):
    if op == "*":
        return ch1 * ch2
    elif op == "/":
        return ch1 // ch2
    elif op == "+":
        return ch1 + ch2
    else:
        return ch1 - ch2
 
   
S = input()
stack = [] 
mas = S.split()
 
for item in mas:
    if item.isdecimal():
        stack.append(int(item))
    elif len(stack) >= 2:
        a2 = stack.pop()
        a1 = stack.pop()          
        res = MathsOp(item, a1, a2)
        stack.append(res)
    else:
        print('ERROR')
        exit() 
        
if len(stack) == 1:
    print(*stack)
else:
    print('ERROR')