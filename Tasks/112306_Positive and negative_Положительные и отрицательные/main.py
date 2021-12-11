input()
print(*sorted(map(int, input().split()), key=lambda x: (x < 0) + (x <= 0)))