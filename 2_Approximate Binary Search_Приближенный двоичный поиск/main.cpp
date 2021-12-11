#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int *load_array_from_keyboard(int count) {
    auto array = new int[count];
    for (int i = 0; i < count; i++)
        cin >> array[i];
    return array;
}

int find_index_in_array_by_number(int *array, int array_size, int number) {
    int left = 0;
    int right = array_size;

    while (right - left > 1) {
        int mid = (right + left) / 2;
        if (array[mid] > number)
            right = mid;
        else
            left = mid;
    }

    if (right == array_size)
        return left;

    return number - array[left] <= array[right] - number ? left : right;
}

int main() {
#ifndef DEBUG
    int n;
    cin >> n;

    int k;
    cin >> k;

    auto first_sorted_array = load_array_from_keyboard(n);
    auto second_array = load_array_from_keyboard(k);
#else
    srand (time(NULL));

    int n = 50;
    int k = 5;
    vector<int> first;
    for (int i = 0; i < n; i++)
        first.push_back(rand()%1000);
    sort(first.begin(), first.end());
    for (int i = 0; i < n; i++)
        cout << first[i] << " ";

    cout << endl;
    int* first_sorted_array = first.data();

    vector<int> second;
    for (int i = 0; i < k; i++)
        second.push_back(rand()%1000);
    second[second.size()-1] = 10000;
    int* second_array = second.data();

    for (int i = 0; i < k; i++)
        cout << second[i] << " ";

    cout << endl;

#endif
    for (int i = 0; i < k; i++) {
        int nearest_index = find_index_in_array_by_number(first_sorted_array, n, second_array[i]);
        cout << first_sorted_array[nearest_index]  << endl;
    }

    return 0;
}