#ifndef mStack_h

#define mStack_h

#include "sqVector.h"

template<typename T> class mStack: private sqVector<T>
{
    using sqVector<T>::size;
    using sqVector<T>::capacity;
    using sqVector<T>::data;
    using sqVector<T>::pop_back;
    using sqVector<T>::push_back;
    using sqVector<T>::back;
    using sqVector<T>::resize;
public:
    mStack() : sqVector<T>(0) {}

    using sqVector<T>::isFull;
    using sqVector<T>::isEmpty;
    using sqVector<T>::size_;
    using sqVector<T>::capacity_;
    using sqVector<T>::operator[];

    void push(T elem)
    {
        this->push_back(elem);
    }
    void pop()
    {
        this->pop_back();
    }
    T top()
    { 
        return this->back();
    }
};

#endif 
