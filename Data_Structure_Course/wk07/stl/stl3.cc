#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief Return an iterator which points to the first instance of the given value
 *        If the value is not found, return v.end()
 * @param v
 * @param given
 * @return std::vector<int>::iterator
 */

std::vector<int>::iterator findGivenValue(std::vector<int>& v, int given) {
	std::vector<int>::iterator it;

	it = find(v.begin(), v.end(), given);
	if(it != v.end()) {
		return it;
	} else {
		return v.end();
	}
}

int main() {
	std::vector<int> v = {2,4,8};
	std::vector<int>::iterator it;
	findGivenValue(v, 2);
	return 0;
}


