#include<string>
#include"GUEST.h"
#include"AUTHORITY_SERVICE.h"
#include<iostream>
using namespace std;
GUEST:: GUEST(): USER()
{
    location = " ";
    mail_address = " ";

}

    bool GUEST::  authenticate(Authority_Service& auth) override {
        return auth.registerUser(username); // Guest registration
    }

void GUEST:: performAction() override { std::cout << "Guest browsing\n"; }
void GUEST :: registerToSystem(){
    cout<<"Enter your Full-Name: ";
    cin>>full_name;
    cout<<"Enter your Username: ";
    cin>>username;
    cout<<"Enter your Password: ";
    cin>>password;
    cout<<"Enter your Location: ";
    cin>>location;
    cout<<"Enter your Email Address: ";
    cin>>mail_address;
    cout<<"Enter your age: ";
    cin>>age;
}
void GUEST:: viewProducts(){}
void GUEST :: searchProducts(std:: string){}
GUEST:: ~GUEST(){};