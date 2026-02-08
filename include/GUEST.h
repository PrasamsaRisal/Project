#pragma once
#include<string>
#include"../include/USER.h"
class GUEST: public USER
{
    public:
    void viewProducts();
    void searchProducts(std:: string);
    void register();
};