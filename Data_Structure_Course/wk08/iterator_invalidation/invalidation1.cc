#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief creates a vector with ascending numbers from 0 - n-1
 *
 * @param n the size of the vector to be created
 */
std::vector<int> ascendingVector(int n) {
   std::vector<int> v(5);

   std::ranges::generate(v.begin(), v.end(), 5);


   // cout << "_________\n";
   //  for (auto &i:v) {
  	// 	cout <<  i << "\n";
  	// }
    return v;
}


int main() {
	 vector<int> v;
   ascendingVector(4);
	 return 0;

}


