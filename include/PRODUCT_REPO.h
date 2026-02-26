#pragma once
#include <string>
#include <vector>
#include "../include/PRODUCT.h"

using namespace std;

class PRODUCT_REPO
{
    private:
        PRODUCT* allProducts;
        int productCount;

    public:
        PRODUCT_REPO();
        ~PRODUCT_REPO();

        void addProduct(PRODUCT product);
        void removeProduct(PRODUCT product);
        void updateProduct(PRODUCT product);
        vector<PRODUCT> searchByName(string name);
        vector<PRODUCT> getAllProducts();
};