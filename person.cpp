#include "person.h"
person::person (){
    this->person_name = "";
    this->person_age = -1;
}

person::person(std::string arg_name, int arg_age){
    this->person_name = arg_name;
    this->person_age = arg_age;
}
int person::getage(){
    return this->person_age;
}

std::string person::getname(){
    return this->person_name;
}