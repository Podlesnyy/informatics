import sys

N = int(input())
bidon_volumes = [6, 1, 5]
bidon_volumes = sorted(bidon_volumes)

count_of_bidons_and_last_bidon_volume_dic = {}


def find_count_for_litres(litres):
    if count_of_bidons_and_last_bidon_volume_dic.get(litres) is not None:
        return count_of_bidons_and_last_bidon_volume_dic[litres]

    if litres == 0:  # все уже наполнили
        count_of_bidons_and_last_bidon_volume_dic[0] = 0, 0
        return 0, 0

    min_count = 10000, 0
    for bidon_volume in bidon_volumes:
        if bidon_volume > litres:
            continue

        count_for_litres = find_count_for_litres(litres - bidon_volume)
        if count_for_litres[0] < min_count[0]:
            min_count = count_for_litres[0], bidon_volume
    if min_count[
        0] == 10000:  # не можем подобрать бидоны. например нужно 5 литров собрать только из 3-х литровых бидонов.
        print(0)
        sys.exit()

    count_of_bidons_and_last_bidon_volume_dic[litres] = min_count[0] + 1, min_count[1]
    return count_of_bidons_and_last_bidon_volume_dic[litres]


find_count_for_litres(N)

result_count = count_of_bidons_and_last_bidon_volume_dic[N][0]
print(result_count)

result_bidons = []
n = N
for i in range(result_count):
    bidon = count_of_bidons_and_last_bidon_volume_dic[n][1]
    result_bidons.append(bidon)
    n = n - bidon
result_bidons = sorted(result_bidons, reverse=True)

print(*result_bidons)