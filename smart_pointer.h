//
// Created by alian on 12/5/18.
//

#ifndef EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H
#define EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H

#include <iostream>
#include <stdexcept>

#ifdef LOGGING
#define LOG_PRINT(str) std::cout << str " " << std::endl;
#else
#define LOG_PRINT(str)
#endif //#ifdef LOGGING


template<typename T>
class UniquePtr {
public:
    explicit UniquePtr(T *ptr);

    ~UniquePtr();

    T *operator->() const;

    T &operator*() const;

    T *get() const;

    operator bool();

private:
    // Prevent coping
    UniquePtr(UniquePtr const &);

    UniquePtr &operator=(UniquePtr const &);

    UniquePtr &operator=(T *);

    T *m_ptr;
};

template<typename T>
UniquePtr<T>::UniquePtr(T *ptr) : m_ptr(ptr) {
    LOG_PRINT("UniquePtr::UniquePtr()")
    if (!ptr){
        LOG_PRINT("UniquePtr::UniquePtr() ptr inut is null")
        throw std::invalid_argument("ptr is null");
    }
}

template<typename T>
UniquePtr<T>::~UniquePtr() {
    LOG_PRINT("UniquePtr::~UniquePtr()")
    delete m_ptr;
}

template<typename T>
T *UniquePtr<T>::operator->() const {
    LOG_PRINT("UniquePtr::operator->")
    return m_ptr;
}

template<typename T>
T &UniquePtr<T>::operator*() const {
    LOG_PRINT("UniquePtr::operator*")
    return *m_ptr;
}

template<typename T>
T *UniquePtr<T>::get() const {
    LOG_PRINT("UniquePtr::get()")
    return m_ptr;
}

template<class T>
UniquePtr<T>::operator bool(){
    LOG_PRINT("UniquePtr::operator bool")
    return dynamic_cast<T *>(get()) != NULL;
}


#endif //EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H
