#pragma once
#include"../include/USER.h"
#include"../include/BILL.h"
#include"../include/PRODUCT.h"
#include"AUTHORITY_SERVICE.h"
#include<string>
class SELLER: public USER
{
    private:
    BILL purchaseHistory;
    public:
    bool  authenticate(AUTHORITY_SERVICE& auth);
    void  performAction();
    void viewProduct();
    void searchProduct(std:: string);
    void addProduct(PRODUCT product);
    void addPrice(std::string productName, float productPrice);
    void addQuantity(std:: string productName, int qty);
};