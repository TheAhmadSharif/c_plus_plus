#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector <std::pair<std::string, double>> distance_s = {};

std::string random_string()
{
     std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
     std::random_device rd;
     std::mt19937 generator(rd());
     std::shuffle(str.begin(), str.end(), generator);
     return str.substr(0, 4);    // assumes 32 < number of characters in str         
}


double distanceCalculate(double x1, double y1, double x2, double y2) {
	double x = x1 - x2; 
	double y = y1 - y2;
	double dist;
	dist = pow(x, 2) + pow(y, 2);       
	dist = sqrt(dist);  
	string  random = random_string();
	distance_s.push_back({random, dist});            
	return dist;
}


int main() {
	// std::cout << num << "\n";


	double __distance1 = distanceCalculate(0, 0, 6, 5);
	double __distance2 = distanceCalculate(0, 0, 2, 1);
	double __distance3 = distanceCalculate(0, 0, 6, 5);
	double __distance4 = distanceCalculate(0, 0, 16, 10);

	
	std::sort(distance_s.begin(), distance_s.end(), [](auto &left, auto &right) {
    	return left.second < right.second;
	});

	for (const auto& elem: distance_s) {
	  	cout << elem.first << " " << elem.second << "\n"; 
	}

	return 0;
}

