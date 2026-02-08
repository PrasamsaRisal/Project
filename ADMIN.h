#pragma once
#include"../include/USER.h"
#include<string>
class ADMIN: public USER
{
    public:
    void viewProdcut();
    void searchProduct(std::string);
    void manageProduct(std:: string);
    void deleteProduct(productName: int);
    void updateProduct(product: PRODUCT);
    void manageSalesReport();
    void viewAllUsers();
    void generateSalesReport();

};
