#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;




int main() {
	vector<int> arr = { 10, 15, 20, 25, 30, 35 };
    if (binary_search(arr.begin(), arr.end(), 15))
        cout << "15 exists in vector";
    else
        cout << "15 does not exist";
 
    cout << endl;

	return 0;
}



