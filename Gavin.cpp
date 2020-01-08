//
// Created by gavin on 1/8/20.
//

#include <iostream>
#include "Gavin.h"

// constructor

Gavin::Gavin(int age, std::string nick, std::string hair, int height) {
    this->age = age;
    nickName = nick;
    haircolor = hair;
    this->height = height;
}

void Gavin::speak( ) {
    std::cout << "my name jeff" << std::endl;
}