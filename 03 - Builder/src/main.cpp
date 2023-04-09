
#include <person.hpp>

int main(int argc, char const *argv[])
{
    // create a Person object using PersonBuilder
    Person john = PersonBuilder()
                        .withFirstname("John")
                        .withLastname("Doe")
                        .build();
    
    Person thomas = PersonBuilder()
                        .withEmail("john@doe.com")
                        .build();
    
    // display person's objects info
    thomas.presentYourself();
    john.presentYourself();

    return 0;
}
