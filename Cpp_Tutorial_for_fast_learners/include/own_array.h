#ifndef __OWN_ARRAY_H__
#define __OWN_ARRAY_H__

#include <iostream>
#include <string>

// Class definition
template <typename T, int S>
class OwnArray {
private:
    T *data;
    int size;
public:
    OwnArray();
    OwnArray(T *arr);
    void print();
    ~OwnArray();
};

// Class implementation
template <typename T, int S>
OwnArray<T,S>::OwnArray(): size(S), data(new T[S]){}

template <typename T, int S>
OwnArray<T,S>::OwnArray(T *arr): OwnArray(){
    for(int i = 0; i < size; i++){
        data[i] = arr[i];
    }
}

template <typename T, int S>
void OwnArray<T,S>::print(){
    for (int i = 0; i < size; i++){
        std::cout << " " << *(data + i);
    }
    std::cout << std::endl;
}

template <typename T, int S>
OwnArray<T,S>::~OwnArray(){
    delete[] data;
}

#endif