#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief Erases every second item from the vector. Example: {1, 2, 3, 4} -> {1, 3}
 *
 * @param vec vector where every second item is erased.
 */
void eraseEverySecond(std::vector<int>& vec) {
	vector<int>::iterator it;

  it = vec.begin();
	 

  for (int i = 0; i < vec.size(); i = i + 1) {
      it = vec.erase(it+1);
  }


    cout << "_________\n";
    for (auto &i:vec) {
  		cout <<  i << "\n";
  	}

}


int main() {
   vector<int> vec = {1,2,3,4,5,6};
   // eraseEverySecond(v);

   std::vector<int>::iterator min_element_output = std::min_element(vec.begin(), vec.end());

   cout << vec[0] << "\n";
   return 0;
}
