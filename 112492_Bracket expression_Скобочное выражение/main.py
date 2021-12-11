def is_balanced(text):
    text = "".join(el for el in text if el in "〈({[<>]})〉")

    while text:
        flag = True
        for el in "〈〉", "()", "{}", "[]", "<>":
            if el in text:
                text = text.replace(el, "")
                flag = False
        if flag:
            return "NO"
    return "YES"
text=input()
print(is_balanced(text))