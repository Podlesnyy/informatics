#include <iostream>
using namespace std;

bool AllowedSign(char x) {
	return ((x >= '0' && x <= '9') || (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) ? 1 : 0;
}

int main() {
	char x;
	int count = 0;	
	bool wordBegin = true;	
	while (EOF != (x = getchar())) {
		if (AllowedSign(x) && wordBegin) {	
			count++;
			wordBegin = false;	
		}
		else if (x == ' ')	
			wordBegin = true;	
	}
	cout << count;
	return 0;
}