#include <iostream>

#include <string>

using namespace std;

class Person {
  public:
    Person(string const& name, int age);
    string get_name() const;
    void celebrate_birthday(int next_age);
    void print() const;
  private:
    string name_;
    int    age_;
};  // Note semicolon!


void Person::print() const {
    cout << "Hi \n";
}