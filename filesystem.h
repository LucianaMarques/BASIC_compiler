#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <iostream>
using namespace std;
#include <string>
#include <fstream>


class filesystem  
{
public:
    string file;
    filesystem(string f);
    void open_file(ifstream& f);
    void close_file(ifstream f);
    void read_line(string line);
    void end_line(void);
};



#endif