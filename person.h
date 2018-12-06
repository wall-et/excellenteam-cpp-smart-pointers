//
// Created by alian on 12/5/18.
//

#ifndef EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_PERESON_H
#define EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_PERESON_H

#include <iostream> //size_t

class Person {
public:
    Person();
    Person(const char *);
    Person(const char *, const int id, const char age);

#ifdef TESTING
    void print() const;
    const char * getFullName() const;
#endif

private:
    char m_full_name[32];
    unsigned int m_id;
    unsigned char m_age;
};



#endif //EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_PERESON_H
