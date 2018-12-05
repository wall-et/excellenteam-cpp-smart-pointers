//
// Created by alian on 12/5/18.
//
#include <iostream>
#include "smart_pointer.h"
#include "person.h"

int main() {
    Person* p1 = new Person("Shlomo");
    p1->print();

    UniquePtr<Person> p2(new Person("s"));
    p2->print();
    if (p2)
    {
        std::cout << "something" <<std::endl;
    }
    return 0;
}

