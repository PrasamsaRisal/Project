#pragma once
#include "../include/USER_ACCOUNT.h"
#include "../include/CART.h"

#include<string>
class USER
{
   protected:
   USER_ACCOUNT user_acc;
   private:
   CART* cart;
   public:
    virtual void viewProduct()=0;
    virtual void searchProduct()=0;
    virtual void addToCart()=0;
    void checkout();
    USER_ACCOUNT getAccount();
    Authority getAuthority();

};