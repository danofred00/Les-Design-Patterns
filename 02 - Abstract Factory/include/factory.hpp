
#include "AbstractAnimalFactory.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class CatFactory : public AbstractAnimalFactory
{
    public:
        std::unique_ptr<Animal> create(std::string name) override;
};

class DogFactory : public AbstractAnimalFactory
{
    public:
        std::unique_ptr<Animal> create(std::string name) override;
};