#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief Arrange vector in three subsequent sections:
 *        - those divisible by three (asc order)
 *        - those whose reminder is 1 (asc order)
 *        - those whose reminder is 2 (asc order)
 * @param v a sortable vector
 * @return int EXIT_SUCCESS if everything went OK, EXIT_FAILURE otherwise
 */
int sortMod3(std::vector<int>& v) {
  std::vector<int>::iterator it, it_1;
  // sort(v.begin(), v.end());
  std::stable_partition (v.begin(), v.end(), [&](const auto& it) { 
  		if(it%3 == 0) {
	  		return it;
		  } else if (it%3 == 1 ){
		  	return it;
		  }});

  for(it = v.begin(); it != v.end(); ++it) {
  	cout << *it << "\n";
  }
  return EXIT_FAILURE;
}

int main() {
	std::vector<int> v = { 7, 13, 22, 28, 31, 70, 94, 8, 17, 29, 35, 59, 65, 74, 101};
	std::vector<int>::iterator it;
	sortMod3(v);
	return 0;
}
