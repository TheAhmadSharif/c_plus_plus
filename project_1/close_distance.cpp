#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;




int main() {

	map <int, int> distance = {
		{06, 12},
		{12, 14},
		{02, 16},
		{28, 24},
	};


	 distance.erase(std::remove(distance.begin(), distance.end(), 16), distance.end());
	

	for (const auto& elem: distance) {
		cout << elem.first << " Elem \n";
		
	}



	return 0;
}

