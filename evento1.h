#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>
using namespace td;

#include "evento.h"

typedef linha {
	string line;
	int num;
} line;

class evento1 : public evento
{
    public:
        evento * proximo;
		int instante_programado;
		char id;
		string name;
		(*tarefa)(void);
		evento(evento * prox, int inst, char i, string n, tarefa(void));

        // linha a ser lida
        linha * line;
}


#endif