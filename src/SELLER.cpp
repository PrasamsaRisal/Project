#include"SELLER.h"
#include"../include/USER.h"
#include"../include/BILL.h"
#include"../include/PRODUCT.h"
#include"../include/AUTHORITY_SERVICE.h"
#include<string>
using namespace std;
bool SELLER:: authenticate(AUTHORITY_SERVICE& auth) {
 return auth.verifyClient(username, "");   
}
void SELLER:: performAction(){
    cout<<"Seller interacting"<<endl;
}
void SELLER:: viewProduct(){}
void SELLER:: searchProduct(std:: string){}
void SELLER:: addProduct(PRODUCT product){}
void SELLER:: addPrice(std:: string productName, float productPrice){}
void SELLER:: addQuantity(std:: string productName, int qty){}