#include <iostream>
#include <string>
#include "filesystem.h"
#include "asciifilter.h"
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
        vector<token *> tokens;
        for (int i = 0; i < vec.size(); i ++)
        {
            string k;
            k.push_back(vec[i]);
            token * tok = new token(k);
            tokens.push_back(tok);
        }
    }
    file_system->close_file(file);
}