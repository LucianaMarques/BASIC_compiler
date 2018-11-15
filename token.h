#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
using namespace std;

#include <string>

class token{
public:
    token(string key);
    string c;
    char category;
    char type;
};

#endif