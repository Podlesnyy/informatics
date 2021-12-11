#include <iostream>

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
    return array[left] == number ? left : -1;
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
    int n = 10;
    int k = 5;
    int first_sorted_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int second_array[5] = {-2, 0, 4, 9, 12};
#endif

    for (int i = 0; i < k; i++) {
        cout << ( find_index_in_array_by_number(first_sorted_array, n, second_array[i]) != -1 ? "YES" : "NO" ) << endl;
    }

    return 0;
}