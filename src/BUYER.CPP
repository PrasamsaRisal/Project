#include"BUYER.h"
#include<iostream>
using namespace std;
#include"../include/USER.h"
#include"../include/BILL.h"
#include"../include/PRODUCT.h"
#include"AUTHORITY_SERVICE.h"
bool SELLER:: authenticate(AUTHORITY_SERVICE& auth) {
     return auth.verifyClient(username, "");
}
void SELLER:: peroformAction() {
    cout<<"Buyer interacting"<<endl;
}
void SELLER:: viewProduct(){}
void SELLER:: searchPRoduct(){}
void SELLER:: addTocart(){}
void SELLER:: checkout(){}
void SELLER:: myProducts(){}
BILL SELLER:: placeOrder(){}
void SELLER:: viewCart(){}
void SELLER :: editCart(){}
void  SELLER:: requestBill(){}
