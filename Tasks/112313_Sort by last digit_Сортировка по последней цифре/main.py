def main():
    n = int(input())
    a = input().split(maxsplit = n)
    print(*sorted(a, key = lambda x: x[-1]))
    
if __name__ == "__main__":
    main()