#pragma once
#include"../include/USER.h"
#include"../include/PRODUCT.h"
#include<string>
class ADMIN: public USER
{
    public:
    void viewProdcut();
    void searchProduct(std::string);
    void manageProduct(std:: string);
    void deleteProduct(std:: string productName);
    void updateProduct(PRODUCT product);
    void manageSalesReport();
    void viewAllUsers();
    void generateSalesReport();

};
