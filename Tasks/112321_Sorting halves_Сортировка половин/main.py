def main():
    n = int(input())
    a = list(map(int, input().split(maxsplit = n)))
    m = n // 2
    a[:m] = sorted(a[:m])
    a[m:] = sorted(a[m:], reverse = True)
    print(*a)
    
if __name__ == "__main__":
    main()