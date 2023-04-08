
#include <iostream>
#include <AbstractAnimalFactory.hpp>
#include <factory.hpp>


int main(int argc, char const *argv[])
{

    auto factory = CatFactory();

    // create a Dog with create method from Factory
    auto dog = factory.create("John");
    // we can see here that he's working
    std::cout << dog->getName() << std::endl;

    dog->speak(); 

    return 0;
}
