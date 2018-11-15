#include "asciifilter.h"
#include "token.h"

asciifilter::asciifilter(string l)
{
    this->line = l;
}

vector<char> asciifilter::extract_ascii()
{
    vector<char> v; 
    for (int i = 0; i < this->line.size(); i++)
    {
        v.push_back(this->line[i]);
    }
    this->chars = v;
    return v;
}

token * asciifilter::classify_char(char c)
{
    string s; 
    s.push_back(c);
    token * t = new token(s);
    return t;
}