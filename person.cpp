//
// Created by alian on 12/5/18.
//
#include <cstring> //strcpy
#include "person.h"

Person::Person(){
    std::cout << "Person::empty ctor" <<std::endl;
}

Person::Person(const char *name) {
    strcpy(m_full_name, name);

}

Person::Person(const char *name, const int id, const char age)  : m_id(0),m_age(0) {
    strcpy(m_full_name, name);
}

void Person::print() const {
    std::cout << m_full_name <<std::endl;
}

const char * Person::getFullName() const {
    return m_full_name;
}