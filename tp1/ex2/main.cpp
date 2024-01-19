#include "Person.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Person> persons;
    int number;
    std::cin >> number;
    
    for(int i = 0; i < number; i++){
        std::cout << "Firstname : ";
        std::string first;
        std::cin >> first;

        std::cout << "Surname : ";
        std::string surname;
        std::cin >> surname;
        persons.emplace_back(first, surname);
    }

    for(auto p: persons){
        std::cout << "La personne s'appelle " << p.get_first_name() << " " << p.get_surname() << std::endl;
    }
    return 0;
}