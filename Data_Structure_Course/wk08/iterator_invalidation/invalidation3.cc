#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief duplicates even numbers in the vector, removes uneven numbers. Example: {1, 2, 3 4} -> {2, 2, 4, 4}
 * 1,2,3 >> 2,2
 * @param vec vector to be handled
 */
void duplicateEvenRemoveUneven(std::vector<int>& vec) {
    vector<int>::iterator it;

    for ( it = vec.begin(); it != vec.end() ; it++){
        if ( *it % 2 == 0 ){
            it = vec.insert(it, *it);
            it++;
        }
        else {
           vec.erase(it);
           it--;
        }
    }
}


int main() {
    vector<int> v = {1, 2, 3, 4};
    vector<int>::iterator it;

    // it = v.end();

    // v.erase(it - 1);

    // cout << "_______\n";
    // for (auto &i: v) {
    //     cout << i << "\n";
    // }
    
    duplicateEvenRemoveUneven(v);
}
