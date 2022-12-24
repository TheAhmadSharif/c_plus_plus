/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

https://youtu.be/DZbY6rNU7Wg?t=1100


List: 

To insert element we need to use iterator. We can not do that like vector.

*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
	std::vector<int> v{-19, 21, -4, 6};

	auto it = std::find_if(begin(v), end(v), [](int i){ return (i%2 != 0 && i >0); });

	cout << *it;

	

	return 0;
}

