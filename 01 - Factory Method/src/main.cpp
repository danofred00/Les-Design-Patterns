
#include <iostream>
#include <Cat.hpp>
#include <Dog.hpp>

int main(int argc, char const *argv[])
{
    Animal dog = Dog("Toto");

    std::cout << dog.getName() << std::endl;

    return 0;
}
