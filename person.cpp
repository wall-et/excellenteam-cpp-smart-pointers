//
// Created by alian on 12/5/18.
//

#include "person.h"

Person::Person(const char *name) {
    strcpy(m_full_name, name);

}

Person::Person(const char *name, const int id, const char age)  : m_id(0),m_age(0) {
    strcpy(m_full_name, name);
}