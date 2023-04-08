
#ifndef __ANIMAL_CAT__

    #define __ANIMAL_CAT__

    #include "Animal.hpp"

    class Cat : public Animal
    {
        using Animal::Animal;
        
        public:
            void speak() override;
    };

#endif