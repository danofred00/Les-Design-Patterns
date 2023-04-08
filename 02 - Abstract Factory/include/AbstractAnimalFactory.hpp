
#ifndef __ANIMAL_FACTORY__

    #define __ANIMAL_FACTORY__

    #include "Animal.hpp"
    #include <memory>


    class AbstractAnimalFactory
    {
    public:
        // Factory method to create an instance of Animal
        virtual std::unique_ptr<Animal> create(std::string name) = 0;
    };

#endif