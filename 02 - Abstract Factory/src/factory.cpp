
#include <factory.hpp>

std::unique_ptr<Animal> DogFactory::create(std::string name)
{
    return std::make_unique<Dog>(name);
}

std::unique_ptr<Animal> CatFactory::create(std::string name)
{
    return std::make_unique<Cat>(name);
}