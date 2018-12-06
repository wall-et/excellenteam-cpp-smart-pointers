//
// Created by alian on 12/5/18.
//
#include <iostream>
#include <cstring>
#include "smart_pointer.h"
#include "person.h"



#ifdef TESTING
void test_sp_memory_released(){
    char * c1 = new char[1];
    {
        UniquePtr<Person> p1(new Person);
    }
    char * c2 = new char[1];
//    std::cout << &c1 << std::endl;
//    std::cout << &c2 << std::endl;
    if(&c2 - &c1 == 1){
        std::cout << "SmartPointer memory released. OK" << std::endl;
    }else{
        std::cout << "SmartPointer memory not released. ERROR" << std::endl;
    }

}

void test_sp_arrow_call(){

    UniquePtr<Person> p2(new Person("s"));
//    std::cout << p2->getFullName() << std::endl;
//    std::cout << strcmp(p2->getFullName(),"s") << std::endl;
    if(strcmp(p2->getFullName(),"s") == 0){
        std::cout << "SmartPointer arrow_call. OK" << std::endl;
    }else{
        std::cout << "SmartPointer arrow_call. ERROR" << std::endl;
    }
}

void test_sp_bool_op_call(){
    try {
        UniquePtr<Person> p2(new Person("s"));
//        p2->print();
        if (p2)
        {
            std::cout << "SmartPointer bool operator. OK" << std::endl;
        }
    }catch(...) {
        std::cout << "SmartPointer bool operator. ERROR" << std::endl;
    }
}

void test_sp_star_call(){
    UniquePtr<Person> p1(new Person("A"));
//    (*p1).print();
    if(strcmp((*p1).getFullName(),"A") == 0){
        std::cout << "SmartPointer star_call. OK" << std::endl;
    }else{
        std::cout << "SmartPointer star_call. ERROR" << std::endl;
    }
}

#endif //#ifdef TESTING

int main() {
#ifdef LOGGING
    UniquePtr<Person> p1(new Person);
#endif
#ifdef TESTING
    test_sp_memory_released();
    test_sp_arrow_call();
    test_sp_bool_op_call();
    test_sp_star_call();
#endif //#ifdef TESTING
    return 0;
}

