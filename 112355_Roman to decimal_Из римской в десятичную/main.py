def roman_to_int(user_roman):
    roman_numerals = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

    prev_symbol = user_roman[-1]
    result = roman_numerals.get(prev_symbol)
    if result is None:
        return None

    for current_symbol in user_roman[-2::-1]:
        result_prev = roman_numerals.get(prev_symbol)
        if result_prev is None:
            return None

        result_curr = roman_numerals.get(current_symbol)
        if result_curr is None:
            return None

        if result_curr >= result_prev:
            result += result_curr
        else:
            result -= result_curr
        prev_symbol = current_symbol
    return result


def main():
    full_str = input()

    for word in full_str.split(' '):
        dec_number = roman_to_int(word)
        if dec_number is None:
            print(word, end=' ')
        else:
            print(dec_number, end=' ')


if __name__ == "__main__":
    main()