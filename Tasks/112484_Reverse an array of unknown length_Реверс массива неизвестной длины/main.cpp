#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void reversed(int* arr, int len) {

	for (int i = 0, j = len - 1; i < j; i++, j--) {

		arr[i] = arr[i] + arr[j];
		arr[j] = arr[i] - arr[j];
		arr[i] = arr[i] - arr[j];
	}


}
int main() {
	ifstream Fin;
	ofstream Fout;
	Fin.open("input.txt");
	Fout.open("output.txt");
	int n;
	Fin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		Fin >> arr[i];
	}
	reversed(arr, n);
	for (int i = 0; i < n; i++) {
		Fout << arr[i] << " ";
	}
	
	
	Fin.close();
	Fout.close();
	system("PAUSE");
	return 0;
}