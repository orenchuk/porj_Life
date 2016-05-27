#include "Random.hpp"
#include "Life.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    Random Person;
    Life Life;
    Person.setlife(Life.chooseSchoolLevel(Person.getArrayOfParametrs()));
    Person.setlife(Life.chooseSchoolFavouriteSubject(Person.getArrayOfParametrs()));
    
    
    
    std::cout<<Person.getLife();
}
