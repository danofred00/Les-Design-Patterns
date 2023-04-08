
#include <iostream>
#include <AnimalFactory.hpp>


int main(int argc, char const *argv[])
{
    Animal dog = AnimalFactory::create("DOG", "John");

    std::cout << dog.getName() << std::endl;

    return 0;
}
