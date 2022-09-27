// uniform_int_distribution::operator()
#include <iostream>
#include <chrono>
#include <random>
using namespace std;


int produce_random_numbers(int low, int high, int seed_value){
	// unsigned seed = seed_value;
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count() * seed_value;
    std::default_random_engine generator (seed_value);
    std::uniform_int_distribution<int> distribution(low, high);
    return distribution(generator);
}


int main() {
	int s = 0;

	int lower_bound;
	int upper_bound;
	int seed_value;
	char user_command = 'c';
	
	cout << "Enter a lower bound: ";
	cin >> lower_bound;

	cout << "Enter a upper bound: ";
	cin >> upper_bound;


	cout << "Enter a seed value: ";
	cin >> seed_value;

	


	while (user_command == 'c') {
		int t = produce_random_numbers(lower_bound, upper_bound, seed_value);
		cout << "Your drawn random number is: " << t << "\n";

		cout << "Press q to quit or any other key to continue: ";
		cin >> user_command;

		if(user_command != 'c') {
			break;
		}

	}

	


  return 0;
}