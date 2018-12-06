//
// Created by alian on 12/5/18.
//
#include <cstring> //strcpy
#include "person.h"

#ifdef LOGGING
#define LOG_PRINT(str) std::cout << str " " << std::endl;
#else
#define LOG_PRINT(str)
#endif //#ifdef LOGGING


Person::Person(){
    LOG_PRINT("Person::Person() EMPTY")
}

Person::Person(const char *name) {
    LOG_PRINT("Person::Person() char* input")
    strcpy(m_full_name, name);

}

Person::Person(const char *name, const int id, const char age)  : m_id(0),m_age(0) {
    LOG_PRINT("Person::Person() ALL")
    strcpy(m_full_name, name);
}

#ifdef TESTING
void Person::print() const {
    LOG_PRINT("Person::print()")
    std::cout << m_full_name <<std::endl;
}

const char * Person::getFullName() const {
    LOG_PRINT("Person::getFullName()")
    return m_full_name;
}
#endif //#ifdef TESTING