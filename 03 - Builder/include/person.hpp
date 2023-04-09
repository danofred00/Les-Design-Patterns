
#ifndef __PERSON__

    #define __PERSON__

    #include <string>

    using namespace std;

    class Person
    {
        public:
            Person() = default;
            Person(string firstname, string lastname, string address, string email, string tel);
            ~Person();

            void presentYourself() const;

            // getters
            const string getFirstname() const;
            // you can complete this by yourself
            // it just an example

            // setters
            void setFirstname(const string & firstname);

        private:
            string mFirstname;
            string mLastname;
            string mAddress;
            string mEmail;
            string mTel;
    };

    // define the builder
    // we can define Builder class outside Person class
    // that's my choice
    class PersonBuilder
    {
        public:
            PersonBuilder();

            PersonBuilder withFirstname(string firstname);
            PersonBuilder withLastname(string lastname);
            PersonBuilder withAddress(string address);
            PersonBuilder withEmail(string email);
            PersonBuilder withTel(string tel);
            Person build();

        private:
            string firstname = "";
            string lastname = "";
            string address = "";
            string email = "";
            string tel = "";
    };


#endif