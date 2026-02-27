#pragma once
#include<string>
#include"SYSTEM.h"
#include"GUEST.h"
#include"CLIENT.h"
#include"ADMIN.h"
#include"AUTHORITY_SERVICE.h"
class SYSTEM
{
    private:
    AUTHORITY_SERVICE auth;
    GUEST guest;
    CLIENT client;
    ADMIN admin;
    public:
    
};