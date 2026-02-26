#include "../include/USER_ACCOUNT.h"
using namespace std;

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