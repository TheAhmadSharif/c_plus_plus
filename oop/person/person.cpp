#include "person.hh"  // Note! Implementation file includes the corresponding header (definition) file!
#include <iostream>
#include <string>

using namespace std;

Person::Person(string const& name, int age):
    name_(name), age_(age)  {
}

string Person::get_name() const {
    return name_;
}

void Person::celebrate_birthday(int next_age) {
    age_ = next_age;
}

void Person::print() const {
    cout "Hi \n";
}