#pragma once
#include "../include/USER_ACCOUNT.h"
#include "CART.h"
#include"AUTHORITY_SERVICE.h"


#include<string>
class USER
{
   protected:
   USER_ACCOUNT user_acc;
   std::string full_name, username, password;
   int age;
   private:
   CART* cart;
   public:
    USER();
    virtual bool authenticate(AUTHORITY_SERVICE& auth)=0;
    virtual void peroformAction()=0;
    virtual std:: string getUsername() const=0;
    virtual ~USER()=default;
    virtual void viewProduct()=0;
    virtual void searchProduct()=0;
    virtual void addToCart()=0;
    void checkout();
    USER_ACCOUNT getAccount();
    Authority getAuthority();

};