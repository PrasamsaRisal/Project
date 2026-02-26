#pragma once
#include <string>

enum Authority { GUEST, CLIENT, ADMIN };

class USER_ACCOUNT
{
    private:
        Authority authority;
        std::string full_name;
        std::string contact_num;
        std::string location;
        int age;
        std::string username;
        std::string password;
    public:
        Authority getAuthority();
        void setAuthority(Authority auth);
        std::string getFullName();
        std::string getUsername();
};