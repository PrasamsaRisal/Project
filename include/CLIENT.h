#pragma once
#include"../include/USER.h"
#include"../include/BILL.h"
#include"../include/PRODUCT.h"
#include<string>
class CLIENT: public USER
{
    private:
    BILL purchaseHistory;
    public:
    void viewProduct();
    void searchPRoduct();
    void addTocart();
    void checkout();
    void myProducts();
    //clinet as a seller
    void addProduct(PRODUCT product);
    void addPrice(std::string productName, float productPrice);
    void addQuantity(std:: string productName, int qty);

    //client as a buyer
    BILL placeOrder();
    void viewCart();
    void editCart();
    void requestBill();

};