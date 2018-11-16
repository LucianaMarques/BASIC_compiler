#ifndef ASCIIFILTER_H
#define ASCIIFILTER_H

#include <iostream>
using namespace std;

#include "token.h"
#include "asciicharacter.h"

#include <string>
#include <vector>

class asciifilter{
public:
    asciifilter(string l);
    string line;
    vector<char> chars;
    vector<char> extract_ascii(void);
    asciicharacter * classify_char(char c);
};

#endif