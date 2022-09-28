#include <iostream>
using namespace std;

int main() {
	int test = 10;

	
	int* _pointer = &test; 	// Pointer store the address of a variable.

	cout << test << "\n";
	cout << &test << "\n"; // It print memory location of test variable.
	cout << _pointer << "\n";

	cout << "________________ \n";

	int* ptr; // We can use either * at the end of data type int* or at first * of the variable name like *ptr; 
	int foo = 7;
	ptr = &foo;

	cout << &foo << "\n";
	cout << ptr << "\n";


	return 0;
}