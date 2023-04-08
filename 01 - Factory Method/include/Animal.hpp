
#ifndef __ANIMAL__

    #define __ANIMAL__

    #include <string>

    class Animal
    {
        public:
            // prevent for conversion constructor
            Animal() = default;

            // constructor for Animal
            Animal(std::string name);

            // getters and setter for name property
            std::string getName() const;
            void setName(std::string name);

            // abstract method
            virtual void speak() = 0;

        private:
            // private name property for the animal
            std::string m_name;
    };

#endif