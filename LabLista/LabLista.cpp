// LabLista.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Elemento.h"
#include "ElementoDouble.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoPersona.h"
#include "Lista.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Lista i;
	i.insertarFinal(new ElementoInt(8));
	i.insertarFinal(new ElementoInt(3));
	i.insertarFinal(new ElementoInt(5));
	cout << "Lista de Int:" << endl;
	cout << i << endl;
	cout << "Agrego Int al final:" << endl;
	i.insertarFinal(new ElementoInt(9));
	cout << i << endl;
	cout << "Agrego Int al inicio:" << endl;
	i.insertarInicio(new ElementoInt(15));
	cout << i << endl;

	
	Lista ii;
	ii.insertarFinal(new ElementoIntInt(2, 4));
	ii.insertarFinal(new ElementoIntInt(8, 5));
	ii.insertarFinal(new ElementoIntInt(3, 9));
	cout << "Lista de IntInt:" << endl;
	cout << ii << endl;
	cout << "agrego IntInt en la posicion 1:" << endl;
	ii.insertarElemento(new ElementoIntInt(1, 3), 1);
	cout << ii << endl;

	
	Lista d;
	d.insertarFinal(new ElementoDouble(3.5));
	d.insertarFinal(new ElementoDouble(8.3));
	d.insertarFinal(new ElementoDouble(1.8));
	d.insertarFinal(new ElementoDouble(9.1));
	d.insertarFinal(new ElementoDouble(2.5));
	cout << "Lista de Double:" << endl;
	cout << d << endl;
	cout << "Elimino Double al inicio:" << endl;
	d.eliminarInicio();
	cout << d << endl;
	cout << "Elimino Double al final:" << endl;
	d.eliminarFinal();
	cout << d << endl;


	Lista p;
	Persona p1(12, "Raquel");
	Persona p2(23, "Teresa");
	Persona p3(86, "Michael");
	Persona p4(1, "Pedro");
	p.insertarFinal(new ElementoPersona(p1));
	p.insertarFinal(new ElementoPersona(p2));
	p.insertarFinal(new ElementoPersona(p3));
	p.insertarFinal(new ElementoPersona(p4));
	cout << "Lista de Personas:" << endl;
	cout << p << endl;
	cout << "Elimino Persona de posición 2:" << endl;
	p.eliminarElemento(2);
	cout << p << endl;

	return 0;
}

