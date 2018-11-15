#include <iostream>
#include <string>
#include "filesystem.h"
#include "evento.h"
using namespace std;

//lista ligada de eventos
evento * head = new evento();

int main()
{
    string f = "file.txt";
    filesystem * file_system = new filesystem(f);
    ifstream file;
    file_system.open_file(file);
    while(!= EOF)
    {
        file_system.readline();
    }
    file_system.close_file(file);
}