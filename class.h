#ifndef _CLASS_H__
#define _CLASS_H__

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int attrib;
    public:
        MyClass(int);
        ~MyClass();
        int * getAttribAddress();
        void printAttrib();
};

inline int * MyClass::getAttribAddress(){
    return &(this->attrib);
}

inline void MyClass::printAttrib(){
    cout<<this->attrib<<endl;
}

#endif
