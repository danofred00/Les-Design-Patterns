
#ifndef __ANIMAL_DOG__

    #define __ANIMAL_DOG__

    #include "Animal.hpp"

    class Dog : public Animal
    {
        using Animal::Animal;
        public:
            void speak() override;
    };

#endif