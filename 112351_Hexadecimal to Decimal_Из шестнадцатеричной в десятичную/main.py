def universalConvertor(input_string, system_ischesleniy):
    digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    result=0
    for symbol in input_string:
        index=digits.find(symbol.upper())
        if index>=system_ischesleniy or index==-1:
            return None

        result=result*system_ischesleniy+index

    return result

input_string=input()
if input_string[0] == "-":
    x=universalConvertor(input_string[1:],16)
    print("-", x, sep="")
else:
    x=universalConvertor(input_string,16)
    print(x)