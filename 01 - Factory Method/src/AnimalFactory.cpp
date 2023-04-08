
#include <AnimalFactory.hpp>
#include <Dog.hpp>
#include <Cat.hpp>
#include <string>

#include <stdexcept>

std::unique_ptr<Animal> AnimalFactory::create(const std::string type, std::string name)
{
    if (type.compare("DOG") == 0)
        return std::make_unique<Dog>(name);
    else if(type.compare("CAT") == 0)
        return std::make_unique<Cat>(name);
        
    throw std::invalid_argument("Unknow type ");
}