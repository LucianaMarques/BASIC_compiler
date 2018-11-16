#include <iostream>
#include <string>
#include "filesystem.h"
#include "asciifilter.h"
#include "asciicharacter.h"
using namespace std;

//lista ligada de eventos
//evento * head = new evento();

int main()
{
    string f = "file2.txt";
    filesystem * file_system = new filesystem(f);
    ifstream file;
    file_system->open_file(file);
    asciifilter * ascii_filter = new asciifilter("\n");
    string line;
    while(!file.eof())
    {
        line = file_system->read_line(file);
        ascii_filter->line = line;
        vector<char> vec = ascii_filter->extract_ascii();
        vector<asciicharacter *> characters;
        for (int i = 0; i < vec.size(); i ++)
        {
            asciicharacter * a = new asciicharacter(vec[i]);
            characters.push_back(a);
        }
    }
    file_system->close_file(file);
}