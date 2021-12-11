#include <algorithm>
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int N, K;
vector<int> bidon_volumes;

struct count_of_bidons_and_bidon_last {
    int count_of_bidons;
    int bidon_last;
};

map<int, count_of_bidons_and_bidon_last> count_of_bidons_and_last_bidon_volume_dic;

count_of_bidons_and_bidon_last find_count_for_litres(const int litres) {
    if (count_of_bidons_and_last_bidon_volume_dic.find(litres) != count_of_bidons_and_last_bidon_volume_dic.end())
        return count_of_bidons_and_last_bidon_volume_dic[litres];

    // все уже наполнили
    if (litres == 0) {
        count_of_bidons_and_bidon_last example{};
        example.bidon_last = 0;
        example.count_of_bidons = 0;
        count_of_bidons_and_last_bidon_volume_dic[0] = example;
        return example;
    }
    count_of_bidons_and_bidon_last min_count{};
    min_count.count_of_bidons = 10000;
    min_count.bidon_last = 0;

    for (const int bidon_volume : bidon_volumes)
    {
        if (bidon_volume > litres)
        {
            continue;
        }

        const count_of_bidons_and_bidon_last count_for_litres = find_count_for_litres(litres - bidon_volume);
        if (count_for_litres.count_of_bidons < min_count.count_of_bidons)
        {
            min_count.count_of_bidons = count_for_litres.count_of_bidons;
            min_count.bidon_last = bidon_volume;
        }
    }

    count_of_bidons_and_last_bidon_volume_dic[litres].count_of_bidons = min_count.count_of_bidons + 1;
    count_of_bidons_and_last_bidon_volume_dic[litres].bidon_last = min_count.bidon_last;
    return count_of_bidons_and_last_bidon_volume_dic[litres];
}


int main() {

    cin >> N;
    bidon_volumes.push_back(1);
    bidon_volumes.push_back(5);
    bidon_volumes.push_back(6);
    find_count_for_litres(N);
    const int result_count = count_of_bidons_and_last_bidon_volume_dic[N].count_of_bidons;
    if (result_count == 10001)
    {
        cout << -1;
    }
    else {
        cout << result_count << endl;
        vector<int> result_bidons;
        int n = N;
        for (int i = 0; i < result_count; i++) {
            int bidon = count_of_bidons_and_last_bidon_volume_dic[n].bidon_last;
            result_bidons.push_back(bidon);
            n = n - bidon;
        }

        sort(result_bidons.begin(), result_bidons.end());
        reverse(result_bidons.begin(), result_bidons.end());

        for (const int result_bidon : result_bidons)
        {
            cout << result_bidon << " ";
        }
    }
    return 0;
}