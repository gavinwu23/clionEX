#include <iostream>
#include "dog.h"
#include "Gavin.h"

int num ( ) {
    return 5;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    char y = printWoof();
    std::cout << y << std::endl;

    Gavin me (10,"GBO","Black",50);
    me.speak();



    return 0;
}
