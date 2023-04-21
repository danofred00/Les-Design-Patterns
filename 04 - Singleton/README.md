# Singleton Design Pattern

Le pattern Singleton fait également parti des patterns de construction et il est utilisé pour limiter le nombre d'instances d'une classe à un et un seul objet tel que le mot Single (un seul) l'indique.

Il est à noter que plusieurs façon de le faire existent, mais la solution recommander pour ca est le pattern Singleton.

Donc sans plus tarder, je t'invite a consulter le code pour voir comment on l'utilise.

```c++ 
#include <iostream>
#include <person.hpp>

int main(int argc, char const *argv[])
{
    // create a Person object using Singleton Pattern
    Person* john = Person::getInstance();

    john->setFirstname("john");

    // display person's objects info
    john->presentYourself();
    cout << std::endl << std::endl;
    
    // getInstance will always return the same object
    Person::getInstance()->presentYourself();

    return 0;
}
```
