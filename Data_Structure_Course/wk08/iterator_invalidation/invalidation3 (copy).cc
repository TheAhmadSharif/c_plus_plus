#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


/**
 * @brief duplicates even numbers in the vector, removes uneven numbers. Example: {1, 2, 3 4} -> {2, 2, 4, 4}
 *
 * @param vec vector to be handled
 */
void duplicateEvenRemoveUneven(std::vector<int>& vec) {

    using Iter = std::vector<int>::iterator;

    Iter begin = vec.begin();
    Iter end = vec.end();

    for (int i = 0; i < vec.size(); i++) {
        if(vec[i]%2 == 1 && vec[i+1]) {
            vec[i] = vec[i+1];
        } else {
            vec.erase(i);
        }

    }

    cout << "_______________ \n";
    for(auto &i: vec) {
        cout << i << "\n";
    }
}


int main() {
    vector<int> v = { 1, 2, 3};
    duplicateEvenRemoveUneven(v);
}
