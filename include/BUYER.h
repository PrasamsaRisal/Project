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
    bool authenticate(AUTHORITY_SERVICE& auth);
    void peroformAction();
    std:: string getUsername() const=0;
    void viewProduct();
    void searchPRoduct();
    void addTocart();
    void checkout();
    void myProducts();
    BILL placeOrder();
    void viewCart();
    void editCart();
    void requestBill();

};