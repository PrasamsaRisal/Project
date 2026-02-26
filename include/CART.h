#pragma once
#include<string>
#include"../include/PRODUCT.h"
class CART
{
    private:
    PRODUCT* cart_items;
    double total_amount;
    public:
    void addItem(PRODUCT product);
    void removeItem(std:: string product_name );
    void viewCart();
    double calculateTotal();
};