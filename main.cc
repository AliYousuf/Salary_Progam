#include <iostream>
#include "header.h"

int main()
{

    std::cout << "Hello World!" << std::endl;
    Boss b("Ali Yousuf",400);
    b.print();
    std::cout << "Solary :" << b.payment() << std::endl;

    Employee * ptr = new Boss("Keald",2400);
    ptr->print();
    std::cout << "Solary :" << ptr->payment() << std::endl;

    return 0;
}

