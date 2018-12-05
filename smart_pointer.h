//
// Created by alian on 12/5/18.
//

#ifndef EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H
#define EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H

template<typename T>
class UniquePtr {
public:
    explicit UniquePtr(T *ptr);

    ~UniquePtr();

    T *operator->() const;

    T &operator*() const;

    T *get() const;

private:
    // Prevent coping
    UniquePtr(UniquePtr const &);

    UniquePtr &operator=(UniquePtr const &);

    T *m_ptr;
};

template<typename T>
UniquePtr<T>::UniquePtr(T *ptr) : m_ptr(ptr) {}

template<typename T>
UniquePtr<T>::~UniquePtr() {
    delete m_ptr;
}

template<typename T>
T *UniquePtr<T>::operator->() const {
    return m_ptr;
}

template<typename T>
T &UniquePtr<T>::operator*() const {
    return *m_ptr;
}

template<typename T>
T *UniquePtr<T>::get() const{

}

template<typename T>
T *UniquePtr<T>::get() const{
    return m_ptr;
};
//UniquePtr<Person> p(new Person("Shlomit"));
//if (p)
//{
//// ...
//}


#endif //EXCELLENTEAM_ELLA_CPP_SMART_POINTERS_WALL_ET_SMART_POINTER_H
