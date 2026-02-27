#include "../include/USER_ACCOUNT.h"
#include<iostream>
#include "USER_ACCOUNT.h"
using namespace std;
USER_ACCOUNT USER_ACCOUNT:: newAccount( std:: string full_name, std:: string username, std:: string password,
             std::string location, std::string mail_address, Authority auth){
        this -> full_name= full_name;
        this -> username= username;
        this -> password= password;
        this -> location= location;
        this-> mail_address= mail_address;
        this -> age = age;
}

Authority USER_ACCOUNT::getAuthority()
{
    return authority;   
}

void USER_ACCOUNT::setAuthority(Authority auth)
{
    authority = auth;   
}

string USER_ACCOUNT::getFullName()
{
    return full_name;
}

string USER_ACCOUNT::getUsername()
{
    return username;
}