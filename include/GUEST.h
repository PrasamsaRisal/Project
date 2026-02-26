#pragma once
#include<string>
#include"../include/USER.h"
class GUEST: public USER
{
    private:
    std:: string full_name, password, location, username, mail_address;
    int age;
    public:
    void viewProducts();
    void searchProducts(std:: string);
    void registerToSystem();

};