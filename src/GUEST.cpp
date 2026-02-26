#include<string>
#include"../include/GUEST.h"
using namespace std;
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