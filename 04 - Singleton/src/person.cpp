
#include <iostream>
#include <iomanip>
#include <person.hpp>

Person::Person()
{
}

Person *Person::instance = nullptr; // initialise instance to nullptr

Person* Person::getInstance(){
    if(instance == nullptr) {
        instance = new Person();
    }
    return instance;
}


void Person::presentYourself() const
{
    cout << " --- Person ---" << endl;
    cout << setw(13) << "Firstname : " << mFirstname << endl;
    cout << setw(13) << "Lastname : " << mLastname << endl;
    cout << setw(13) << "Email : " << mEmail << endl;
    cout << setw(13) << "Address : " << mAddress << endl;
    cout << setw(13) << "Tel : " << mTel << endl;
}

const string Person::getFirstname() const
{
    return mFirstname;
}

/**
 *  create some other getters and setters
 * . . .
*/

void Person::setFirstname(const string &firstname)
{
    mFirstname = firstname;
}

