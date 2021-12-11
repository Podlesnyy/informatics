N, K = map(int, input().split())

bidon_volumes = list(map(int, input().split()))[:K]

count_of_bidons_and_last_bidon_volume_dic = {}


def find_count_for_litres(litres):
    if count_of_bidons_and_last_bidon_volume_dic.get(litres) is not None:
        return count_of_bidons_and_last_bidon_volume_dic[litres]

    # все уже наполнили
    if litres == 0:
        count_of_bidons_and_last_bidon_volume_dic[0] = 0, 0
        return 0, 0

    min_count = 10000, 0
    for bidon_volume in bidon_volumes:
        if bidon_volume > litres:
            continue

        count_for_litres = find_count_for_litres(litres - bidon_volume)
        if count_for_litres[0] < min_count[0]:
            min_count = count_for_litres[0], bidon_volume

    count_of_bidons_and_last_bidon_volume_dic[litres] = min_count[0] + 1, min_count[1]
    return count_of_bidons_and_last_bidon_volume_dic[litres]


find_count_for_litres(N)

result_count = count_of_bidons_and_last_bidon_volume_dic[N][0]
if result_count == 10001:
    print(-1)
else:
    print(result_count)

    result_bidons = []
    n = N
    for i in range(result_count):
        bidon = count_of_bidons_and_last_bidon_volume_dic[n][1]
        result_bidons.append(bidon)
        n = n - bidon
    result_bidons = sorted(result_bidons, reverse=True)

    print(*result_bidons)