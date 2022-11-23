#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief Return an iterator which points to the last even integer of the vector
 *        If the value is not found, return v.rend()
 *
 * @param v the vector to be scanned through
 * @return std::vector<int>::reverse_iterator
 */

std::vector<int>::reverse_iterator findLastEven(std::vector<int>& v) {
	std::vector<int>::reverse_iterator r_it;
	r_it = std::find_if(v.rbegin(), v.rend(), [&](const auto& r_it){ return r_it%2 == 0; });
	if(*r_it) {
		return r_it;
	}
	return v.rend();
}


int main() {
	std::vector<int> v = {15, 9};
	std::vector<int> t;
	std::vector<int>::reverse_iterator r_it;
	r_it = findLastEven(v);
	cout << *r_it << "\n";
	return 0;
}
