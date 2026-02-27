#pragma once
#include<string>
#include"AUTHORITY_SERVICE.h"
#include"../include/USER.h"
class GUEST: public USER
{
    private:
    std:: string  location,  mail_address;
   
    public:
    GUEST();
    ~GUEST();
    bool virtual authenticate(AUTHORITY_SERVICE& auth)=0;
    void virtual  performAction()=0;

    std::string getUsername() const override { return username; }
    void viewProducts();
    void searchProducts(std:: string);
    void registerToSystem();

};