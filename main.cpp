#include <iostream>
#include "class.h"

using namespace std;

int main()
{
    cout << "Hello World" << endl;
    MyClass my_class(7);
    my_class.printAttrib();
    int *x = my_class.getAttribAddress();
    cout << *x << endl;
    *x = 21; //breaks encapsulation
    my_class.printAttrib();

    return 0;
}
