/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

 https://www.youtube.com/watch?v=SOA4k8NDOUY
 https://www.youtube.com/watch?v=96ObBC6TuoA



 01. Vector Declaration
 02. Push Back
 03. Size()
 04. front()
 05. back()
 06. clear()


*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;


using namespace std;

int main() {


	vector<std::pair<int, std::string>> __pair;
	
	__pair.emplace_back(20, "string");
	__pair.emplace_back(40, "string");

	cout << "_____________\n";

	vector<std::pair<int, int>> foo;
	std::vector<std::pair<int, int>> ___vec_pair {{1, 2}, {2, 3}, {2, 4}};


	copy_if(___vec_pair.begin(), ___vec_pair.end(), std::back_inserter(foo), [](pair<int,int> p) { return p.first >= 1 && p.second >= 2; });


	 for (const auto& pair : foo){
    	std::cout << pair.first << "," << pair.second << "\n"; 
	}


	return 0;
}

