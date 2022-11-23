#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

#include "test.hh" // NOT_FOUND constant

using namespace std;


int findAtLeastGiven(std::map<std::string, int>& m, int given){
	std::map<std::string, int> m;
	std::map<std::string, int>::iterator it;

	auto it = m.find(given);

    if(m.find(given) != m.end()) {
         return it;
    } else {
       return NOT_FOUND;
    }
}
int main() {
	map<string, int> m;
	map<string, int>::iterator it;


	m["1"] = 1;
	m["2"] = 2;

	findAtLeastGiven(m, 1);




	return 0;
}

