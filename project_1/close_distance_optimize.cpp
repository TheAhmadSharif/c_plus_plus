// C++ program for implementation of
// above approach
#include<bits/stdc++.h>
using namespace std;

// Function to print required answer
void pClosest(vector<vector<int>> pts, int k)
{

// { 366,219 }, 181917   === 140917
// { 945,767},  1481314  === 1440314
// {740,1569},  3009361  === 2968361
// {579,1758},  3425805 - 41000 === 3384805
// { 542,455 }, 500789 - 41000 === 90789

/*1. tampere: pos=(542,455), id=tpe
2. turku satama: pos=(366,219), id=tus
3. kuopio: pos=(945,767), id=kuo*/

	multimap<int, int> test = {
		{181917, 0},
		{1481314, 1},
		{3009361, 2},
		{3425805, 3},
		{500789, 4},
	};

vector<int> v = {};


// stations_closest_to (500,400)  == 410000
	/*multimap<int, int> mp;
	for(int i = 0; i < pts.size(); i++)
	{
		int x = pts[i][0], y = pts[i][1];
		mp.insert({(x * x) + (y * y) , i});
	}*/

// { 366,219 }, 181917   === 140917
// { 945,767},  1481314  === 1440314
// {740,1569},  3009361  === 2968361
// {579,1758},  3425805 - 41000 === 3384805
// { 542,455 }, 500789 - 41000 === 90789


	
	for(auto it = test.begin(); it != test.end() && k > 0; it++, k--) {
		double t = abs((it->first - 410000)); 
		v.push_back(t);
	}

	cout << "_________\n";

	for(auto x:v) {
		cout << x << "\n";
	}

}

// Driver code
int main()
{
	vector<vector<int>> points = { 
									{ 366,219 },		
									{ 945,767},
									{740,1569},
									{579,1758},
									{ 542,455 },
								 };



	
	int K = 3;
	
	pClosest(points, K);
	return 0;
}

// This code is contributed by sarthak_eddy.


// { 366,219 }, 181917   === 140917
// { 945,767},  1481314  === 1440314
// {740,1569},  3009361  === 2968361
// {579,1758},  3425805 - 41000 === 3384805
// { 542,455 }, 500789 - 41000 === 90789
// stations_closest_to (500,400)  == 410000


// 366, 219 == 181917