
#include <iostream>
#include <iomanip>
#include <person.hpp>

Person::Person(string firstname, string lastname, string address, string email, string tel) :
    mFirstname(firstname), 
    mLastname(lastname), 
    mAddress(address),
    mEmail(email),
    mTel(tel)
{

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

void Person::setFirstname(const string & firstname)
{
    mFirstname = firstname;
}

Person::~Person()
{ 

}

// person Builder class
PersonBuilder::PersonBuilder()
{

}

PersonBuilder PersonBuilder::withFirstname(string firstname)
{
    this->firstname = firstname;
    return *this;
}

PersonBuilder PersonBuilder::withLastname(string lastname)
{
    this->lastname = lastname;
    return *this;
}

PersonBuilder PersonBuilder::withAddress(string address)
{
    this->address = address;
    return *this;
}

PersonBuilder PersonBuilder::withEmail(string email)
{
    this->email = email;
    return *this;
}

PersonBuilder PersonBuilder::withTel(string tel)
{
    this->tel = tel;
    return *this;
}

Person PersonBuilder::build()
{
    // Person' Object is created here
    return Person(
        firstname,
        lastname,
        address,
        email,
        tel
    );
}