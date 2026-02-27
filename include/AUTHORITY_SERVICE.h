#pragma once
#include<string>
#include"../include/USER_ACCOUNT.h"
#include"../include/USER.h"
class AUTHORITY_SERVICE
{
    private:
    std:: string admin_pass;
    USER_ACCOUNT* registered_user;
    public:
    void registeredUser(USER_ACCOUNT account);
    USER* login(std:: string username, std:: string password);
    bool verifyAdmin(std:: string passcode);
    void logout();
};