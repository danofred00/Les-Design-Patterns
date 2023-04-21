#include <iostream>
#include <person.hpp>

int main(int argc, char const *argv[])
{
    // create a Person object using Singleton Pattern
    Person* john = Person::getInstance();

    john->setFirstname("john");

    // display person's objects info
    john->presentYourself();
    cout << std::endl << std::endl;
    
    // getInstance will always return the same object
    Person::getInstance()->presentYourself();

    return 0;
}
