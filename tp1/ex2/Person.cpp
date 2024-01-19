#include "Person.hpp"

Person::Person(std::string first, std::string last)
    : first_name { first }
    , surname { last }
{};

std::string Person::get_first_name(){
    return first_name;
};

std::string Person::get_surname(){
    return surname;
};
