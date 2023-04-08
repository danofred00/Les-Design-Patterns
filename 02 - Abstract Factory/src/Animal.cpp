
#include <Animal.hpp>

Animal::Animal(std::string name) : m_name(name)
{

}

std::string Animal::getName() const 
{
    return m_name;
}

void Animal::setName(std::string name)
{
    m_name = name;
}
