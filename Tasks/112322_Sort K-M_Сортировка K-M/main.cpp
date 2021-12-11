#include <iostream>
#include <cstdlib>
using namespace std;
void fast_sort(int* nums, int begin, int end)
{
	int l = begin, r = end;
	int v = nums[l + (r - l) / 2];
	while (l <= r)
	{
		while (nums[l] < v) l++;
		while (nums[r] > v) r--;
		if (l <= r)
		{
			int tmp = nums[l];
			nums[l] = nums[r];
			nums[r] = tmp;
			l++, r--;
		}
	}
	if (begin < r)
		fast_sort(nums, begin, r);
	if (l < end)
		fast_sort(nums, l, end);
}
void fast_reverse_sort(int* numbers, int left, int right)
{
	int pivot;
	int l_hold = left;
	int r_hold = right;
	pivot = numbers[left];
	while (left < right)
	{
		while ((numbers[right] <= pivot) && (left < right))
			right--;
		if (left != right)
		{
			numbers[left] = numbers[right];
			left++;
		}
		while ((numbers[left] >= pivot) && (left < right))
			left++;
		if (left != right)
		{
			numbers[right] = numbers[left];
			right--;
		}
	}
	numbers[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		fast_reverse_sort(numbers, left, pivot - 1);
	if (right > pivot)
		fast_reverse_sort(numbers, pivot + 1, right);
}

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k, m, d, temp, temp1;
	cin >> k >> m >> d;
	if (d == 1) {
		fast_sort(arr, k-1, m-1);
	}
	if (d == -1) {
		fast_reverse_sort(arr, k - 1, m - 1);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr; // освобождение памяти;
	system("pause");
	return 0;
}