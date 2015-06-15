#pragma once 

#include "Elemento.h"
#include "Persona.h"

using namespace std;

class ElementoPersona : public Elemento {

private:
	Persona p;

public:
	ElementoPersona(Persona&);
	virtual ~ElementoPersona();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
};