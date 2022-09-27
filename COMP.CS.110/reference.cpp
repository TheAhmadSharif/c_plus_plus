#include <iostream>
using namespace std;

int main() {
	int integer = 42;
	int& integer_ref = integer; // Point to integer variable.

	integer_ref = 100;


	cout << integer_ref << " integer_ref \n";
	cout << integer << " integer \n";
	return 0;
}