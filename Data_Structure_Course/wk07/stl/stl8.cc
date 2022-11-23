#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

#include "test.hh" // NOT_FOUND constant

using namespace std;


/**
 * @brief Remove from vector v all elements with value less than the limit
 * @param v a vector whose values are to be erased if less than limit
 * @param limit a threshold whose lower values are removed
 * @return int EXIT_SUCCESS if everything went OK, EXIT_FAILURE otherwise
 */
int removeLessThan(std::vector<int>& v, int limit) {
	std::vector<int>::iterator it;
	it = v.erase(remove_if (v.begin(), v.end(), [&](const auto& it) { return it < limit; }), v.end());
	if(*it) {
		return EXIT_SUCCESS;
	}
  	return EXIT_FAILURE;
}

  

int main() {
	std::vector<int> v = {2, 4, 8, 12};


	cout << "_______________\n";
	// for(it = v.begin(); it != v.end(); ++it) {
	//   	cout << *it << "\n";
	//   }

	removeLessThan(v, 4);



	return 0;
}