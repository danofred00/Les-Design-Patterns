
#include <AnimalFactory.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <string>

Animal AnimalFactory::create(const std::string type, std::string name)
{
    if (type == "DOG")
        return Dog(name);
    else if(type == "CAT")
        return Cat(name);
    else
        return Animal(name);
    
}