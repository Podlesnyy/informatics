stolbi = {}

N, K = map(int, input().split())
lygushek = int(input())
if lygushek > 0:
    for stolb in map(int, input().split()):
        stolbi[stolb] = 0


def count_stolbi(stolb):
    if stolbi.get(stolb) is not None:
        return stolbi[stolb]

    kol = 0
    for i in range(1, K + 1):
        if stolb + i > N:
            break
        if stolb + i == N:
            kol += 1
        kol += count_stolbi(stolb + i)

    stolbi[stolb] = kol
    return kol


if N == 1:
    print(1)
else:
    count_stolbi(1)
    print(stolbi[1])