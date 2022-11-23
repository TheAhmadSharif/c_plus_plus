#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


#include "test.hh" // NOT_FOUND constant

using namespace std;


/**
 * @brief Find the median value of a given vector, whose elements are in random
 *        order. Return NOT_FOUND if the size of the vector is zero.
 *
 * @param v a random vector
 * @return int
 */
int findMedian(std::vector<int>& v) {
	std::vector<int>::iterator it;

	int size = v.size();

	if (size == 0) {
	    return NOT_FOUND; 
	  } else {
	  	auto m = v.begin() + v.size()/2;
	  	std::nth_element(v.begin(), m, v.end());
	    return v[v.size()/2];
  	}
}



int main() {
	std::vector<int> v = {2, 4, 8, 12, 16, 21, 24};
	std::vector<int>::iterator it;
	int t = findMedian(v);
	cout << t << "\n";
	return 0;
}