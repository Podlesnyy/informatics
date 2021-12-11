def main():
    n = int(input())
    a = list(map(int, input().split(maxsplit = n)))
    k, m, d = map(int, input().split(maxsplit = 3))
    a[k - 1:m] = sorted(a[k - 1:m], reverse = d < 0)
    print(*a)
    
if __name__ == "__main__":
    main()