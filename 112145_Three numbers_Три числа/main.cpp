#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream Fin;
	ofstream Fout;
	Fin.open("input.txt");
	Fout.open("output.txt");
	int a, b, c, s, p;
	double sa;
	Fin >> a >> b >> c;
	s = a + b + c;
	p = a * b * c;
	sa = (a + b + c)/3.;
	Fout << a << "+" << b << "+" << c << "=" << s << endl;
	Fout << a << "*" << b << "*" << c << "=" << p << endl;
	Fout << "(" << a << "+" << b << "+" << c << ")/3=";
	Fout << fixed << setprecision(3) << sa;

	Fin.close();
	Fout.close();
	system("PAUSE");
	return 0;
}