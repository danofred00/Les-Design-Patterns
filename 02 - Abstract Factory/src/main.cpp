
#include <iostream>
#include <AbstractAnimalFactory.hpp>
#include <factory.hpp>


int main(int argc, char const *argv[])
{

    auto factory = CatFactory();

    // create a Dog with create method from Factory
    auto cat = factory.create("John");
    // we can see here that he's working
    std::cout << cat->getName() << std::endl;

    cat->speak(); 

    return 0;
}
