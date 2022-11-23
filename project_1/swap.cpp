#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;




int main() {


	vector <std::pair<std::string, int>> distance_s = {};
	vector <std::pair<int, std::string>> new_distance_s = {};

	distance_s.push_back({"key1", 100});

	for (const auto& elem: distance_s) {
	  	cout << elem.first << " " << elem.second << "\n"; 
	}

	cout << "_____________\n";
	 for (auto& p : distance_s) {
	        new_distance_s.push_back({100, "key1"});
	 }

	for (const auto& elem: new_distance_s) {
	  	cout << elem.first << " " << elem.second << "\n"; 
	}

	return 0;
}

