#pragma once
#include<string>
#include<vector>
#include"../include/PRODUCT.h"
class PRODUCT_REPO
{
    private:
    vector<PRODUCT>allProducts;
    public:
    void addProduct(product PRODUCT);
    void removeProduct(product PRODUCT);
    void updateProduct(product PRODUCT);
    vector<PRODUCT> searchByName(string);
    vector<PRODUCT> getAllProducts();

};