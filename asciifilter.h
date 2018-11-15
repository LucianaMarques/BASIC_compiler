#ifndef ASCIIFILTER_H
#define ASCIIFILTER_H

#include <iostream>
using namespace std;

#include <string>

class asciifilter{
public:
    asciifilter();
    string line;
    char extract_ascii(void);
};

#endif