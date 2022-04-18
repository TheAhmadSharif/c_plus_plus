#include <iostream>
using namespace std;

int main() {
	int a, b;
	int flag = 0;
	for (a = 2; a < 20; a ++) {
		for (b = 2; b <= a; b++) {
			if(a != b) {
				if( a % b == 0) {
					flag = 1;
					break;
				} else {
					flag = 0;
				}
			}	
		}
		if(flag == 0) {
			cout << a << "\n";
		}
	}

	return 0;
}