
#ifndef __PERSON__

    #define __PERSON__

    #include <string>

    using namespace std;

    class Person
    {
        public:
            void presentYourself() const;

            static Person* getInstance();

            // getters
            const string getFirstname() const;
            // you can complete this by yourself
            // it just an example

            // setters
            void setFirstname(const string & firstname);

        private:
            Person();
            static Person* instance;
            string mFirstname = "";
            string mLastname = "";
            string mAddress = "";
            string mEmail = "";
            string mTel = "";
    };

#endif