
#ifndef __ANIMAL_FACTORY__

    #define __ANIMAL_FACTORY__

    #include "Animal.hpp"
    #include <memory>


    class AnimalFactory
    {
    public:
        AnimalFactory();
        ~AnimalFactory();

        // Factory method to create an instance of Animal
        static std::unique_ptr<Animal> create(const std::string type, std::string name);
    };

#endif