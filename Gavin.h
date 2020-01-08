//
// Created by gavin on 1/8/20.
//

#ifndef MAKEFILEEXAMPLE_GAVIN_H
#define MAKEFILEEXAMPLE_GAVIN_H


#include <string>

class Gavin {

private:
    int age;
    std::string nickName;
    std::string haircolor;
    int height;

public:

    Gavin(int age, std::string nick, std::string hair, int height);

    void speak ();


};


#endif //MAKEFILEEXAMPLE_GAVIN_H
