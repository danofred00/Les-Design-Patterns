
#include <iostream>
#include <AnimalFactory.hpp>


int main(int argc, char const *argv[])
{
    // create a Dog with create method from AnimalFactory
    auto dog = AnimalFactory::create("DOG", "John");

    // we can see here that he's working
    std::cout << dog->getName() << std::endl;

    dog->speak(); 

    return 0;
}
