#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief sort a given vector to an descending order
 *
 * @param v a vector to be sorted
 * @return int EXIT_SUCCESS if everything went OK, EXIT_FAILURE otherwise
 */
int sortDesc(std::vector<int>& v)
{
  std::sort(v.begin(), v.end());    
  std::reverse(v.begin(), v.end());    
  return EXIT_SUCCESS;
}



int main() {

	vector<int> v = { 10, 9, 8, 6, 7, 2, 5, 1 };


	sortDesc(v);

	for (auto &i:v) {
		cout <<  i << "\n";
	}

	return 0;

}
